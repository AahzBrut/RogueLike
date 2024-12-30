#pragma once
#include "core/Scene.h"
#include "tilemap/TileMap.h"


namespace RogueLike {
    class DungeonScene final : public Scene {
    public:
        explicit DungeonScene(Application *application);

    private:
        Shared<TileMap> tilemap;

        void Render() const override;
    };
}
