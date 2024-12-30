#include "tilemap/Grid.h"


namespace RogueLike {
    Grid::Grid(const int width, const int height)
        : width{width},
          height{height} {
        tiles.reserve(width * height);
    }
}
