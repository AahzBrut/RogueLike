#include "tilemap/TileMap.h"

#include <cmath>

#include "core/Scene.h"

namespace RogueLike {
    TileMap::TileMap(Scene *scene, const int cellWidth, const int cellHeight)
        : scene{scene},
          cellWidth{cellWidth},
          cellHeight{cellHeight} {}

    void TileMap::Render() const {
        const auto [winWidth, winHeight] = scene->GetWindowSize();
        const auto gridWidthTiles = std::ceil(winWidth / static_cast<float>(cellWidth)) + 2;
        const auto gridHeightTiles = std::ceil(winHeight / static_cast<float>(cellHeight)) + 2;

        const auto startXGridPos = static_cast<int>(startPosition.x) / cellWidth;
        const auto startYGridPos = static_cast<int>(startPosition.y) / cellHeight;
        const auto offsetX = startPosition.x - static_cast<float>(startXGridPos * cellWidth);
        const auto offsetY = startPosition.y - static_cast<float>(startYGridPos * cellHeight);

        for (auto y = startYGridPos; y < static_cast<int>(gridHeightTiles); y++) {
            for (auto x = startXGridPos; x < static_cast<int>(gridWidthTiles); x++) {
                const auto &tile = grid->GetTile(x, y);
                if (tile.GetType() == TileType::None) continue;
                const auto [spriteRect, texture] = tileDefinitions.at(tile.GetType());
                DrawTexturePro(*texture, spriteRect,
                               {
                                   static_cast<float>((x - startXGridPos) * cellWidth) + offsetX,
                                   winHeight - static_cast<float>(cellHeight) - static_cast<float>(
                                       (y - startYGridPos) * cellHeight) + offsetY,
                                   static_cast<float>(cellWidth),
                                   static_cast<float>(cellHeight)
                               },
                               {0, 0}, 0, WHITE);
            }
        }
    }
}
