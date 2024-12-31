#include "scenes/DungeonScene.h"

#include "core/AssetsManager.h"
#include "tilemap/TileDefinition.h"
#include "tilemap/TileMap.h"


namespace RogueLike {
    DungeonScene::DungeonScene(Application *application)
        : Scene{application},
          tilemap{new TileMap(this, 200, 200, 16, 16)},
          tileDefinitions{
              {
                  TileType::Wall,
                  TileDefinition{{119, 255, 16, 16}, AssetsManager::Get().GetTexture("assets/tileset/colored.png")}
              },
              {
                  TileType::Floor,
                  TileDefinition{{34, 0, 16, 16}, AssetsManager::Get().GetTexture("assets/tileset/colored.png")}
              }
          } {
        tilemap->SetTileDefinitions(tileDefinitions);
    }

    void DungeonScene::Render() const {
        tilemap->Render();
        const auto fps = GetFPS();
        LOG("FPS: %d", fps);
    }
}
