cmake_minimum_required(VERSION 3.10)
project(tlp_switch C)

# Set the output directory for the compiled binary
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/builds)

# Add the executable target
add_executable(tlp-switch main.c)

# Install target: binary → /usr/bin
install(TARGETS tlp-switch
        RUNTIME DESTINATION /usr/bin
        PERMISSIONS OWNER_READ OWNER_WRITE OWNER_EXECUTE
                    GROUP_READ GROUP_EXECUTE
                    WORLD_READ WORLD_EXECUTE)
