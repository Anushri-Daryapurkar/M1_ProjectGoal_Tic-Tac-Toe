#include "game_operations.h"
extern void test_main();

int check_draw(int turn)
{
    #if 0
    if(turn > 9)
    {
        //gotoxy(30,20);
        //textcolor(128+RED);
        printf("\n\n Game Draw");
        getch();
        exit(0);
    }
    return 1;
    #else 
    test_main();
    #endif
    return 0;
}
