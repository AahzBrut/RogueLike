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
        src/tilemap/Grid.cpp
        include/scenes/DungeonScene.h
        src/scenes/DungeonScene.cpp
        include/tilemap/TileType.h
        include/tilemap/TileMap.h
        src/tilemap/TileMap.cpp
        include/tilemap/TileDefinition.h)

target_link_libraries(RogueLike PRIVATE RayEngine)

target_include_directories(RogueLike PUBLIC include)

file(COPY ${CMAKE_CURRENT_LIST_DIR}/assets DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
