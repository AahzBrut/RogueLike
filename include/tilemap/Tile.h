#pragma once
#include "TileType.h"
#include "core/Core.h"
#include "utils/Math.h"


namespace RogueLike {
    using namespace re;

    class Tile {
    public:
        explicit Tile(TileType type);

        void SetType(const TileType newType) { type = newType; }
        [[nodiscard]] TileType GetType() const { return type; }

        void SetExplored(const bool value) { explored = value; }
        [[nodiscard]] bool GetExplored() const { return explored; }

        void SetVisible(const bool value) { visible = value; }
        [[nodiscard]] bool GetVisible() const { return visible; }

        void SetGridPosition(const int x, const int y) { gridPosition.x = x, gridPosition.y = y; }
        void SetGridPosition(const Vector2I &newPosition) { gridPosition = newPosition; }
        [[nodiscard]] Vector2I &GetGridPosition() { return gridPosition; }

        void SetIlluminance(const float value) { illuminance = value; }
        [[nodiscard]] float GetIlluminance() const { return illuminance; }

    private:
        TileType type;
        bool explored{false};
        bool visible{false};
        Vector2I gridPosition{0, 0};
        float illuminance{0.0f};
    };
}
