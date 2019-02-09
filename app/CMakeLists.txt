add_executable(CCTask
        src/main.cpp
        # TODO: Add source files here
        )

target_include_directories(CCTask
        PRIVATE ../external/)

target_compile_features(CCTask
        PUBLIC cxx_std_17)

target_compile_options(CCTask
        PRIVATE -Wall -Werror)

target_link_libraries(CCTask
        PRIVATE glm glfw)