#pragma once
#include "Tile.h"


namespace RogueLike {
    class Grid {
    public:
        Grid(int width, int height);

        Tile &GetTile(int x, int y);
        Tile &GetTile(const Vector2I &gridPosition);
        void SetTile(int x, int y, const Tile &tile);
        void SetTile(const Vector2I &gridPosition, const Tile &tile);

    private:
        int width, height;
        List<Tile> tiles;
    };
}
