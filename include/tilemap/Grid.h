#pragma once
#include "Tile.h"


namespace RogueLike {
    class Grid {
    public:
        Grid(int width, int height);

    private:
        int width, height;
        List<Tile> tiles;
    };
}
