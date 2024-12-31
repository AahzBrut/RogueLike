#pragma once
#include "core/Scene.h"
#include "tilemap/TileDefinition.h"
#include "tilemap/TileMap.h"
#include "tilemap/TileType.h"


namespace RogueLike {
    class DungeonScene final : public Scene {
    public:
        explicit DungeonScene(Application *application);

    private:
        Unique<TileMap> tilemap;
        Map<TileType, TileDefinition> tileDefinitions;

        void Render() const override;
    };
}
