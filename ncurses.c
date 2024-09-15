
/* ncurses.c */

#include <ncurses.h>

int main()
{
	int x, y;
	char letter;
	initscr();
	printw("Press any key");
	refresh();
	
	letter = getch();
	clear();
	printw("You pushed: '%c'", letter);
	refresh();
	getch();

	clear();
	getyx(stdscr, y, x);
	printw(	"x = %d\n"
		"y = %d",
		x, y);
	refresh();
	
	y = 5;
	x = 10;
	
	move(y, x);
	printw("Over here");
	refresh();

	getch();
	endwin();

	return 0;
}
