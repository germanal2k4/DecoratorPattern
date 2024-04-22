cmake_minimum_required(VERSION 3.27)
project(untitled)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled main.cpp
        Coffees/Cofee.cpp
        Coffees/Cofee.h
        Components/Decorator.h
        Coffees/Cacao.cpp
        Coffees/Cacao.h
        Coffees/Expresso.cpp
        Coffees/Expresso.h
        Components/Mocha.cpp
        Components/Mocha.h
        Components/WaterForAfrica.cpp
        Components/WaterForAfrica.h
        Components/Decorator.cpp
)
