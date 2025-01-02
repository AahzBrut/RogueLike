#include "scenes/DungeonScene.h"

#include "core/AssetsManager.h"
#include "tilemap/TileDefinition.h"
#include "tilemap/TileMap.h"


namespace RogueLike {
    DungeonScene::DungeonScene(Application *application)
        : Scene{application},
          tilemap{new TileMap(this, 64, 64)},
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
        tilemap->SetStartPosition({0, 0});
        auto grid = std::make_unique<Grid>(200, 200);
        grid->SetTile(0,0, Tile{TileType::Wall});
        grid->SetTile(1,0, Tile{TileType::Floor});
        grid->SetTile(2,0, Tile{TileType::Wall});
        grid->SetTile(0,1, Tile{TileType::Wall});
        grid->SetTile(1,1, Tile{TileType::Wall});
        grid->SetTile(2,1, Tile{TileType::Wall});
        tilemap->SetGrid(std::move(grid));
    }

    void DungeonScene::Render() const {
        tilemap->Render();
    }
}
