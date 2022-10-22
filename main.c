#include "common/types.h"
#include "raylib.h"

int main() {

    
    float delta = 0.0;

    while (!WindowShouldClose())
    {
        delta = GetFrameTime();

        ClearBackground(GRAY);
        BeginDrawing();
            DrawRectangle(10,10,10,10, BLUE);
        EndDrawing();
    }

    CloseWindow();

    return 0;
}

