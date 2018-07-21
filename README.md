# CPP-Dojo

## add gtest submodule
    - `git submodule add git@github.com:google/googletest.git gtest`
## build gtest 
    - ref https://medium.com/@wingyplus/%E0%B9%80%E0%B8%A3%E0%B8%B4%E0%B9%88%E0%B8%A1%E0%B8%AB%E0%B8%B1%E0%B8%94%E0%B9%80%E0%B8%82%E0%B8%B5%E0%B8%A2%E0%B8%99-unit-test-c-%E0%B8%94%E0%B9%89%E0%B8%A7%E0%B8%A2-google-test-ee5a9d0f1dfd
    - cd gtest
    - mkdir build && cd build
    - cmake ..
    - make
## compile ,test and run 
    - cd ../..
    - g++ -Igtest/googletest/include -Lgtest/build/googlemock/gtest/ -lgtest FizzBuzzTest.cpp -o FizzBuzzTest.o
    - ./FizzBuzzTest

