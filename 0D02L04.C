#include <stdio.h>
#include <conio.h>
void main() {
    int row, col;

    gotoxy(6, 1);
    for (col = 1; col <= 10; col++) {
        printf("%4d", col);
    }

    gotoxy(6, 2);
    for (col = 1; col <= 10; col++) {
        printf("%4c", '*');
    }

    for (row = 1; row <= 10; row++) {
        gotoxy(3, row + 2);
        printf("%2d*", row);

        for (col = 1; col <= 10; col++) {
            gotoxy(6 + (col - 1) * 4, row + 2);
            printf("%4d", row * col);
        }
    }

    getch();
	clrscr();


}