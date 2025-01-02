#pragma once
#include "TileDefinition.h"
#include "tilemap/Grid.h"


namespace re {
    class Scene;
}

namespace RogueLike {
    class TileMap {
    public:
        TileMap(Scene *scene, int cellWidth, int cellHeight);

        void Render() const;
        void SetTileDefinitions(const Map<TileType, TileDefinition> &tileDefinitions) { this->tileDefinitions = tileDefinitions; }
        void SetStartPosition(const Vector2 &startPosition) { this->startPosition = startPosition; }
        void SetGrid(Unique<Grid> &&grid) { this->grid = std::move(grid); }

    private:
        Scene* scene;
        Vector2 startPosition{0, 0};
        int cellWidth, cellHeight;
        Unique<Grid> grid;
        Map<TileType, TileDefinition> tileDefinitions;
    };
}
