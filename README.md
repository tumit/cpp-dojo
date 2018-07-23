# CPP-Dojo
Simple C++ project include 
    - Unit testing by GoogleTest 
    - Run unit and build executable by Travis CI

## Preparation
    - for Window 
        - install mingw
            - apply install g++
            - apply install pthread 
        - install cmake

## Start run project
    - pull project
    - build GoogleTest library
        - cd gtest
        - mkdir build
        - cd build
        - cmake ..
        - make
    - compile and run unit test
        - cd ../.. 
        - g++ -Igtest/googletest/include/ -c main.cpp
        - g++ -pthread main.o -Lgtest/build/googlemock/gtest/ -lgtest -o unit_tests.o
        - ./unit_tests.o
    
    


