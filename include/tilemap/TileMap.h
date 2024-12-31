#pragma once
#include "TileDefinition.h"
#include "tilemap/Grid.h"


namespace re {
    class Scene;
}

namespace RogueLike {
    class TileMap {
    public:
        TileMap(Scene *scene, int gridWidth, int gridHeight, int cellWidth, int cellHeight);

        void Render() const;
        void SetTileDefinitions(const Map<TileType, TileDefinition> &tileDefinitions) { this->tileDefinitions = tileDefinitions; }

    private:
        Scene* scene;
        Vector2 centerPosition{0, 0};
        int gridWidth, gridHeight;
        int cellWidth, cellHeight;
        Grid grid;
        Map<TileType, TileDefinition> tileDefinitions;
    };
}
