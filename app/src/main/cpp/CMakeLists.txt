# Compiler Configuration
# Set the C compiler path
set(CMAKE_C_COMPILER /Users/angeld@backbase.com/Library/Android/sdk/ndk/26.1.10909125/toolchains/llvm/prebuilt/darwin-x86_64/bin/clang)
# Set the C++ compiler path
set(CMAKE_CXX_COMPILER /Users/angeld@backbase.com/Library/Android/sdk/ndk/26.1.10909125/toolchains/llvm/prebuilt/darwin-x86_64/bin/clang++)

# Minimum required CMake version
cmake_minimum_required(VERSION 3.10.2)

# Project name
project(JNINativeLib)

# Add your source files
add_library(SumaNaturales SHARED
    /Users/angeld@backbase.com/Documents/GitHub/JNINativeLib/app/src/main/cpp/NaturalSum.cpp
    # Add your other source files here if you have them
)

# Specify necessary libraries
find_library(log-lib log)

# Link libraries
target_link_libraries(SumaNaturales ${log-lib})
