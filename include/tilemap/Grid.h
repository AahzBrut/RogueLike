#pragma once
#include "Tile.h"


namespace RogueLike {
    class Grid {
    public:
        explicit Grid(int width = 0, int height = 0);
        ~Grid() { LOG("Destroying Grid"); }

        Tile &GetTile(int x, int y);
        Tile &GetTile(const Vector2I &gridPosition);
        [[nodiscard]] const Tile &GetTile(int x, int y) const;
        [[nodiscard]] const Tile &GetTile(const Vector2I &gridPosition) const;
        void SetTile(int x, int y, const Tile &tile);
        void SetTile(const Vector2I &gridPosition, const Tile &tile);

    private:
        int width, height;
        List<Tile> tiles;
    };
}
