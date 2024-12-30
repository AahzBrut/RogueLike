#include "tilemap/Tile.h"

#include "core/AssetsManager.h"


namespace RogueLike {
    void Tile::SetTexture(const String &texturePath) {
        texture = AssetsManager::Get().GetTexture(texturePath);
    }
}
