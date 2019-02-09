#include <logging.hpp>

#include <GLFW/glfw3.h>

#include <cstdio>
#include <cassert>

void glfwErrorCallback( int err, const char *description ) {
    ERR( "GLFW Error 0x%x: %s\n", err, description );
}

void keyCallback( GLFWwindow *window, int key, int scancode, int action, int mods ) {
    if ( key == GLFW_KEY_ESCAPE && action == GLFW_PRESS ) {
        glfwSetWindowShouldClose( window, GLFW_TRUE );
    }
}

int main() {
    glfwSetErrorCallback( glfwErrorCallback );

    LOG( "Initialising GLFW..." );
    glfwInit();

    LOG( "Creating window..." );
    glfwWindowHint( GLFW_CONTEXT_VERSION_MAJOR, 3 );
    glfwWindowHint( GLFW_CONTEXT_VERSION_MINOR, 0 );
    auto window = glfwCreateWindow( 640, 480, "CC Task Template", nullptr, nullptr );
    assert( window != nullptr );

    glfwMakeContextCurrent( window );
    glfwSetKeyCallback( window, keyCallback );
    glfwSwapInterval( 1 );

    glClearColor( 0.f, 0.f, 0.f, 0.f );
    glClear( GL_COLOR_BUFFER_BIT );
    glfwSwapBuffers( window );

    while ( !glfwWindowShouldClose( window )) {
        glfwWaitEvents();
    }

    LOG( "Destroying window..." );
    glfwDestroyWindow( window );

    LOG( "Terminating GLFW..." );
    glfwTerminate();

    return 0;
}