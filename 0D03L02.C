
//Emp struct

#include <stdio.h>
#include <conio.h>

struct Employee {
   int code;
   int salary;
   char name[10];
};
typedef struct Employee Employee;



int main() {


	Employee e1;

	printf("Enter Name: \n");
	scanf("%s", & e1.name);
	
	printf("Enter Code: \n");
	scanf("%d", & e1.code);

	
	printf("Enter salary: \n");
	scanf("%d",& e1.salary);

	
	printf("Name: %s\n",  e1.name);
	printf("Code: %d\n",  e1.code);
	printf("Salary: %d\n",  e1.salary);


	getch();
	clrscr();

	return 0;
}
