
#include <stdio.h>
#include <conio.h>



#if 1 //desc

void main() {
    int row, col;

    gotoxy(6, 1);
    for (col = 10; col >=1; col--) {
        printf("%4d", col);
    }

    gotoxy(6, 2);
    for (col = 10; col >=1; col--) {
        printf("%4c", '*');
    }

    for (row = 10; row >= 1; row--) {
        gotoxy(3, 13-row);
        printf("%2d*", row);

        for (col = 10; col >= 1; col--) {
            gotoxy(6 + (10-col) * 4, 13-row);
            printf("%4d", row * col);
        }
    }

    getch();
	clrscr();
}
#endif // 0
