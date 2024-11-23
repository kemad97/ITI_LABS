#include <stdio.h>
#include <conio.h>


#define ROWS 3
#define COLS 4

int main() {

	int matrix [ROWS][COLS];
	int rowSum[3]={0};
	int colSum[4]={0};
	float colAvg[4]={0};
	int i,j=0;

	for ( i = 0; i<ROWS ; i++)
	{
		for ( j = 0; j<COLS ; j++)

		{
			printf ("Enter student`s %d subject %d: ",i+1,j+1);
			scanf("%d",&matrix[i][j]);
			rowSum[i]+=matrix[i][j];
			colSum[j]+=matrix[i][j];

		}

	}

	//  column averages
	for (j = 0; j < 4; j++) {
		colAvg[j] = colSum[j] / COLS;
	}

	//  row sums
	for ( i = 0; i < 3; i++) {
		printf("Sum of student`s %d grades :\n", i + 1, rowSum[i]);
	}

	//  column averages
	printf("Average of each Subject:\n");
	for (j = 0; j < 4; j++) {
		printf("Average Subject %d: %.2f\n", j + 1, colAvg[j]);
	}


	getch();
	clrscr();

	return 0;
}
