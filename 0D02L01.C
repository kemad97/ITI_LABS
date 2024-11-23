
//magic box
#include <stdio.h>
#include <conio.h>

int N=0;
int cols=0;
int rows=0;

int main() {

	int i=1;
	int num=1;
 //	int j=0;
	scanf("%d" , &N);
	printf("\n");

	cols = N/2;
	rows = 0 ;

	gotoxy(cols*4+2  ,rows*4+2);
	printf("%d",num);


	rows=N;
	cols=N;

	while (i<N*N)
	{

			if (num% N !=0)
			{
				if (rows >0)
				{
				  rows-- ;
				}

				else{
					rows=N ;
				}

				if (cols >0)
				{
				  cols-- ;
				}

				else{
					cols=N;
				}
			}

			else{
				if(rows <N)
				{
				 rows++;
				}
				else{
                rows=0;

				}
			}

			num++ ;
			gotoxy(cols*4+2 ,rows*4+2);
			printf("%d",num);
			i++;

	}

	getch();
	clrscr();





	return 0;
}
