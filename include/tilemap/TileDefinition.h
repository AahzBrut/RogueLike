#pragma once
#include "raylib.h"
#include "core/Core.h"


namespace RogueLike {
    struct TileDefinition {
        Rectangle spriteRect;
        re::Shared<Texture2D> texture;
    };
}
