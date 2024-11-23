#include<stdio.h> 
#include<conio.h> 






void main() 
{ 
	int i =0 ;
	int num=1;

	for ( i =1; i<11; i++)
	{
		printf ("    %d ",i);
		gotoxy(wherex()+2, wherey());
	}
	printf("\n\r");
	for ( i =1; i<11; i++)
	{
		printf ("    * ");
		gotoxy(wherex()+2, wherey());

	}
	printf("\n\r");

	//cols

	for ( i =1; i<11; i++)
	{
		printf (" %d*\n ",i);
		gotoxy(wherex()-1, wherey()+1);

	}
	printf("%d, %d",wherex(),wherey());

	gotoxy(5,3);

	for ( i =1; i<11; i++)
	{
		printf ("    %d ",i);
		gotoxy(wherex()-1, wherey()+1);

	}




	getch();
	clrscr();

}
