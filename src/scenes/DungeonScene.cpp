#include "scenes/DungeonScene.h"


namespace RogueLike {
    DungeonScene::DungeonScene(Application *application)
        : Scene{application},
          tilemap{new TileMap(this, 200, 200, 16, 16)} {}

    void DungeonScene::Render() const {
        tilemap->Render();
    }
}
