
/* ncurses.c */

#include <ncurses.h>

int main()
{
	int key, x, y;
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
	clear();

	keypad(stdscr, TRUE);
	noecho();
	x = y = 5;

	while(key != 'q')
	{
		clear();
		move(0, 0);
		printw("Press left or right arrow - exit by pressing: q");
		
		move(y, x);
		printw("0");
		refresh();
		
		key = getch();
		if(key == KEY_LEFT)
		{
			x--;
			if(x < 0) x=0;
		}
		else if(key == KEY_RIGHT)
		{
			x++;
			if(x > 30) x=30;
		}
	}
	
	endwin();

	return 0;
}
