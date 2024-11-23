
// read arr amd print 

#include <stdio.h>
#include <conio.h>




int main() {

	int arr [5];
	
	int i=0;

	for ( i = 0; i<5 ; i++)
	{
		scanf("%d",&arr[i]);
	}
    printf ("Arr Elems : ");

	for ( i = 0; i < 5; i++)
	{
		printf("%d " , arr[i]);
	}

	


	getch();
	clrscr();

	return 0;
}
