add_executable(CCTask
        src/glad/glad.c
        src/glad/glad.h
        src/glad/khrplatform.h
        src/gl_include.hpp

        src/main.cpp
        src/logging.hpp
        # TODO: Add source files here
        )

target_include_directories(CCTask
        PRIVATE ../external/ src/)

target_compile_features(CCTask
        PUBLIC cxx_std_17)

target_compile_options(CCTask
        PRIVATE -Wall -Werror)

target_link_libraries(CCTask
        PRIVATE glm glfw OpenGL::GL)