
//Emp struct

#include <stdio.h>
#include <conio.h>

struct Employee {
   int code;
   int salary;
   char name[10];
};
typedef struct Employee Employee;



void Set (Employee *e)
{
	printf("Enter Name: \n");
	scanf("%s", & e->name);

	printf("Enter Code: \n");
	scanf("%d", & e->code);


	printf("Enter salary: \n");
	scanf("%d",& e->salary);
}

void Get (const  Employee *e)
{

	printf("Name: %s\n",  e->name);
	printf("Code: %d\n",  e->code);
	printf("Salary: %d\n",  e->salary);
}

int main() {


	Employee e1;

	Set(&e1);
	Get(&e1);

	getch();
	clrscr();

	return 0;
}
