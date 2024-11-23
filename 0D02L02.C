#include <stdio.h>
#include <conio.h>



int main() {
   
    int num=0;
    
    int total=0;
    while (total <100)
    {

		printf("Enter a num: \n\r ");
		scanf("%d", &num);
		total+=num;
        
    }

    printf ("total is : %d",total);
    getch();
    clrscr();





    return 0;
}
