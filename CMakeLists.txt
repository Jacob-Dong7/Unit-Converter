cmake_minimum_required(VERSION 3.16)

project(UnitConverter VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Enable Qt's auto-moc/uic/rcc
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

# Find Qt6 Widgets
find_package(Qt6 REQUIRED COMPONENTS Widgets)

# List ALL your source files here, using SOURCE paths (NOT build/)
set(PROJECT_SOURCES
    UnitConverter/main.cpp
    UnitConverter/mainwindow.cpp
    UnitConverter/mainwindow.h
    UnitConverter/mainwindow.ui
    UnitConverter/length.h
    UnitConverter/length.cpp
    UnitConverter/weight.cpp
    UnitConverter/weight.cpp
)

# Create the executable
qt_add_executable(UnitConverter
    ${PROJECT_SOURCES}
)

# Link against Qt Widgets
target_link_libraries(UnitConverter PRIVATE Qt6::Widgets)
