#include "RogueLikeApplication.h"

#include "scenes/DungeonScene.h"
#include "scenes/MainMenu.h"


re::Application *GetApplication() {
    return new RogueLike::RogueLikeApplication();
}

namespace RogueLike {
    RogueLikeApplication::RogueLikeApplication(): Application{1280, 960, "RogueLike"} {
        const auto world = CreateScene<DungeonScene>();
    }
}
