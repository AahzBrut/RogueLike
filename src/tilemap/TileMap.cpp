#include "tilemap/TileMap.h"

#include <cmath>

#include "core/Scene.h"
#include "utils/Math.h"

namespace RogueLike {
    TileMap::TileMap(Scene *scene, const int gridWidth, const int gridHeight, const int cellWidth, const int cellHeight)
        : scene{scene},
          gridWidth{gridWidth},
          gridHeight{gridHeight},
          cellWidth{cellWidth},
          cellHeight{cellHeight},
          grid{gridWidth, gridHeight} {
        centerPosition = {gridWidth / 2, gridHeight / 2};
    }

    void TileMap::Render() const {
        const auto [winWidth, winHeight] = scene->GetWindowSize();
        const auto gridWidthTiles = static_cast<int>(std::ceil(winWidth / static_cast<float>(cellWidth)));
        const auto gridHeightTiles = static_cast<int>(std::ceil(winHeight / static_cast<float>(cellHeight)));
        LOG("Rendering tile map");
    }
}
