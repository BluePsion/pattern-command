#include "curses.h"

static const int w_numrows = 25;
static const int w_numcols = 80;

void openRogueWindow()
{
    initscr();
    resize_term(w_numrows,w_numcols);
    raw();
    //I want to use the same screen size as ADOM.
    keypad(stdscr, TRUE);
    noecho();
    curs_set(0);
}

void closeRogueWindow()
{
    endwin();
}

void drawABoxAroundEdge(char wallChar)
{
    for(int row = 0; row < w_numrows; row++)
    {
        for(int col = 0; col < w_numcols; col++)
        {
            if(row==0||row==w_numrows-1)mvaddch(row,col,wallChar);
            if(col==0||col==w_numcols-1)mvaddch(row,col,wallChar);

        }
    }
}

