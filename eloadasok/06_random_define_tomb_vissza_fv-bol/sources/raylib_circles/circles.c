#include "raylib.h"
#include <stdlib.h>
#include <time.h>

#define NUM_CIRCLES 25

#define SCREEN_WIDTH 1280
#define SCREEN_HEIGHT 720

typedef struct
{
    Vector2 position;
    int radius;
    Color color;
} Circle;

int randint(int also, int felso)
{
    int veletlen = rand();
    int intervallum = felso - also + 1;

    veletlen = veletlen % intervallum;
    veletlen = also + veletlen;

    return veletlen;
}

int main()
{
    srand(time(NULL)); // ebben a példában csak ez a sor a lényeg
    // srand(102); // illetve ez a sor

    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Circles");

    Circle circles[NUM_CIRCLES];

    Color colors[] = {RED, GREEN, BLUE, YELLOW, ORANGE};
    int numColors = sizeof(colors) / sizeof(colors[0]);

    // create circles
    for (int i = 0; i < NUM_CIRCLES; i++)
    {
        circles[i].position = (Vector2){randint(-100, SCREEN_WIDTH + 100), randint(-100, SCREEN_HEIGHT + 100)};
        circles[i].radius = randint(50, 200);
        circles[i].color = colors[rand() % numColors];
    }

    while (!WindowShouldClose())
    {
        if (IsKeyPressed(KEY_Q))
            break;
        if (IsKeyPressed(KEY_S))
            TakeScreenshot("screenshot.png");

        // draw
        BeginDrawing();
        {
            ClearBackground(WHITE);
            for (int i = 0; i < NUM_CIRCLES; i++)
            {
                DrawCircleV(circles[i].position, circles[i].radius, circles[i].color);
            }
        }
        EndDrawing();
    }

    CloseWindow();

    return 0;
}
