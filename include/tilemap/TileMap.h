#pragma once
#include "tilemap/Grid.h"


namespace re {
    class Scene;
}

namespace RogueLike {
    class TileMap {
    public:
        TileMap(Scene *scene, int gridWidth, int gridHeight, int cellWidth, int cellHeight);

        void Render() const;

    private:
        Scene* scene;
        Vector2I centerPosition{0, 0};
        int gridWidth, gridHeight;
        int cellWidth, cellHeight;
        Grid grid;
    };
}
