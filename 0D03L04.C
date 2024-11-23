

#if 1 // EMp table print lab3

#include <stdio.h>
//#include <windows.h> // Required for gotoxy functionality
#include <conio.h>   // For getch()

#define X_          8
#define Y_          12
#define EmpCount    5 // Number of employees



struct Employee {
    int code;
    int salary;
    char name[10];
};
typedef struct Employee Employee;

/*
// Function to set console cursor position
void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
*/
void Set(Employee *e) {
    printf("Enter Name: ");
    scanf("%s", e->name); 

    printf("Enter Code: ");
    scanf("%d", &e->code);

    printf("Enter Salary: ");
    scanf("%d", &e->salary);
    printf("\n");
}

void Get(const Employee *e, int row, int empIndex)
{
    gotoxy(X_+10, row);
	printf("Emp %d", empIndex);

    // Adjust columns for Name, Code, and Salary
    gotoxy(X_+20, row);
    printf("%s", e->name);

    gotoxy(X_+40, row);
    printf("%3d", e->code);

    gotoxy(X_+60, row);
    printf("%3d", e->salary);
}

int main() {
    int i;
    Employee e1[EmpCount];

    // Input employee data
    for (i = 0; i < EmpCount; i++) {
        printf("Employee %d Details:\n", i + 1);
        Set(&e1[i]);
    }

	clrscr(); // Clear the console screen

	// Print table header
	gotoxy(X_+10, Y_);
	printf("Emp");
	gotoxy(X_+20, Y_);
	printf("Name");
	gotoxy(X_+40, Y_);
	printf("Code");
	gotoxy(X_+60, Y_);
	printf("Salary");

	// Print employee data
	for (i = 0; i < EmpCount; i++)
		{
		Get( &e1[i], (Y_ + i+2) , i + 1 );
	}

	getch();
	//system("cls");
    clrscr();

	return 0;
}

#endif