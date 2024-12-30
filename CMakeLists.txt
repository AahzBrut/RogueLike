cmake_minimum_required(VERSION 3.30)
project(RogueLike)

set(CMAKE_CXX_STANDARD 20)
include(FetchContent)

FetchContent_Declare(
        RayEngine
        GIT_REPOSITORY https://github.com/AahzBrut/RayEngine.git
        GIT_SHALLOW TRUE
        GIT_PROGRESS TRUE
)
FetchContent_MakeAvailable(RayEngine)

add_executable(RogueLike
        include/RogueLikeApplication.h
        src/RogueLikeApplication.cpp
        include/scenes/MainMenu.h
        src/scenes/MainMenu.cpp
        include/tilemap/Tile.h
        src/tilemap/Tile.cpp
        include/utils/Math.h
        include/tilemap/Grid.h
        src/tilemap/Grid.cpp)

target_link_libraries(RogueLike PRIVATE RayEngine)

target_include_directories(RogueLike PUBLIC include)
