#include "lib/raylib.h"
#include <stdbool.h>
#include <stdio.h>
#include <unistd.h>

int main(void)
{
    InitWindow(800, 600, "Hello");
    SetTargetFPS(60);

    InitAudioDevice();
    Music music = LoadMusicStream(
        "/Users/gorsenkovegor/Downloads/mp3/Nirvana.mp3"); // WARNING: музыка не играет скорее всего проблема с доступом
    PlayMusicStream(music);
    while (!WindowShouldClose())
    {
        UpdateMusicStream(music);

        BeginDrawing();
        ClearBackground(RED);
        EndDrawing();
    }
    return 0;
}
