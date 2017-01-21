#include <iostream>
#include "curseroguewindow.h"
#include "curses.h"

using namespace std;

static const char w_playerChar = '@';

int main()
{
    openRogueWindow();

    //This is only here because I get user input every loop, so need the user to see something.
    printw("Press any key to begin...");

    int input{' '};
    bool finished = false;
    int8_t plrRow{0};
    int8_t plrCol{0};
    int8_t maxRow{0};
    int8_t maxCol{0};

    getmaxyx(stdscr,maxRow,maxCol);
    plrRow = maxRow/2;
    plrCol = (maxCol-1)/2;

    start_color();
    init_pair(1, COLOR_RED, COLOR_BLACK);

    while(!finished)
    {
        input = getch();
        //Game Logic
        if(input==27)finished=true;
        //Render
        clear();
        attron(COLOR_PAIR(1));
        drawABoxAroundEdge();
        //See if the player wanted to move...
        if(input==KEY_UP)--plrRow;
        if(input==KEY_DOWN)++plrRow;
        if(input==KEY_LEFT)--plrCol;
        if(input==KEY_RIGHT)++plrCol;


        mvaddch(plrRow,plrCol,w_playerChar);
        refresh();
    }

    closeRogueWindow();
    return 0;
}
