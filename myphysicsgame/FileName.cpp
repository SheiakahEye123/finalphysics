#include "raylib-cpp.hpp"
#include "Polygon.h"

int main() {
    int screenWidth = 800;
    int screenHeight = 450;

    raylib::Window window(screenWidth, screenHeight, "raylib-cpp - basic window");
    raylib::Texture logo("raylib_logo.png");
    raylib::Texture texture("raylib_logo.png");



    auto p = kdn::Polygon(-100, -100, { {0,256},{256,256},{256,0},{0,0} }, texture);

    SetTargetFPS(60);

    while (!window.ShouldClose())
    {
        BeginDrawing();

        window.ClearBackground(RAYWHITE);

        p.Draw();

        DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);

        // Object methods.
        /*logo.Draw(
            screenWidth / 2 - logo.GetWidth() / 2,
            screenHeight / 2 - logo.GetHeight() / 2);*/

        EndDrawing();
    }

    // UnloadTexture() and CloseWindow() are called automatically.

    return 0;
}