#include "tilemap/Grid.h"


namespace RogueLike {
    Grid::Grid(const int width, const int height)
        : width{width},
          height{height} {
        tiles.reserve(width * height);
    }

    Tile &Grid::GetTile(const int x, const int y) {
        return tiles[y * width + x];
    }

    Tile &Grid::GetTile(const Vector2I &gridPosition) {
        return GetTile(gridPosition.x, gridPosition.y);
    }

    void Grid::SetTile(const int x, const int y, const Tile &tile) {
        tiles[y * width + x] = tile;
    }

    void Grid::SetTile(const Vector2I &gridPosition, const Tile &tile) {
        SetTile(gridPosition.x, gridPosition.y, tile);
    }
}
