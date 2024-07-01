cmake_minimum_required(VERSION 3.28)
project(basic_sampler)

set(CMAKE_CXX_STANDARD 17)

# Find the Audio Toolbox and Core Audio frameworks
find_library(AUDIOTOOLBOX AudioToolbox)
find_library(COREAUDIO CoreAudio)

# Set the sources
set(SOURCES
        src/main.cpp
        src/SamplerAU.cpp
        src/SamplerAU.h
        SamplerAU.h
)

# Add the executable
add_executable(SamplerAU ${SOURCES})

# Link the frameworks
target_link_libraries(SamplerAU ${AUDIOTOOLBOX} ${COREAUDIO})
