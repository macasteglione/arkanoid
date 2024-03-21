#include "../include/ball.hpp"

#define SCREEN_WIDTH 800
#define SCREEN_HEIGHT 600

int main()
{
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Arkanoid");
    SetTargetFPS(60);

    Player player({SCREEN_WIDTH / 2, SCREEN_HEIGHT - 50});
    Ball ball({SCREEN_WIDTH / 2, SCREEN_HEIGHT / 2});

    while (!WindowShouldClose())
    {
        player.goLeft(KEY_A);
        player.goRight(KEY_D);
        player.setBoundary();

        BeginDrawing();
        {
            ClearBackground(BLACK);
            ball.updateBall(player);
            player.drawPlayer();
            ball.drawBall();
        }
        EndDrawing();
    }
    CloseWindow();

    return 0;
}
