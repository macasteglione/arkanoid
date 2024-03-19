#include "../include/utils.h"
#include "../include/player.hpp"

#define SCREEN_WIDTH 800
#define SCREEN_HEIGHT 600

int main()
{
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Arkanoid");
    SetTargetFPS(60);

    Player p1({25, SCREEN_WIDTH / 2});

    while (!WindowShouldClose())
    {
        p1.goLeft(KEY_A);
        p1.goRight(KEY_D);
        
        BeginDrawing();
        {
            ClearBackground(BLACK);
            p1.drawPlayer();
        }
        EndDrawing();
    }

    CloseWindow();

    return 0;
}
