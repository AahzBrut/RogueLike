#include "tilemap/TileMap.h"

#include <cmath>

#include "core/Scene.h"

namespace RogueLike {
    TileMap::TileMap(Scene *scene, const int gridWidth, const int gridHeight, const int cellWidth, const int cellHeight)
        : scene{scene},
          gridWidth{gridWidth},
          gridHeight{gridHeight},
          cellWidth{cellWidth},
          cellHeight{cellHeight},
          grid{gridWidth, gridHeight} {}

    void TileMap::Render() const {
        const auto [winWidth, winHeight] = scene->GetWindowSize();
        const auto gridWidthTiles = std::ceil(winWidth / static_cast<float>(cellWidth)) + 2;
        const auto gridHeightTiles = std::ceil(winHeight / static_cast<float>(cellHeight)) + 2;
        const auto [spriteRect, texture] = tileDefinitions.at(TileType::Wall);
        for (auto y = 0; y < static_cast<int>(gridHeightTiles); y++) {
            for (auto x = 0; x < static_cast<int>(gridWidthTiles); x++) {
                DrawTextureRec(*texture, spriteRect,
                               {static_cast<float>(x) * spriteRect.width, static_cast<float>(y) * spriteRect.height}, WHITE);
            }
        }
    }
}
