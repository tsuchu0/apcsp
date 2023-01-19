#include <raylib.h>
#include <stdio.h>

void main () 
{ 
    //- Init -------------------------------------------------------------------------------
    InitWindow(800, 450, "raylib [core] example - basic window");

    SetTargetFPS(60);
    //--------------------------------------------------------------------------------------
    while (!WindowShouldClose())
    {
        //- Update -------------------------------------------------------------------------
        // TODO: Update your variables here
        //----------------------------------------------------------------------------------

        //- Draw ---------------------------------------------------------------------------
        BeginDrawing();

            ClearBackground(RAYWHITE);

            DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);

        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    CloseWindow();
}