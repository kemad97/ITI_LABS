#include <stdio.h>
#include <conio.h>





int main() {

	
	int arr[5] = {14,1,100,6,7};
	int i=0;
	int max = arr[0];
    int min = arr[0];


	for (i=1;i<5;i++)
	{
		if (max<arr[i])
		{
			max=arr[i];
		}

		
		if (min>arr[i])
		{
			min=arr[i];
		}
	}

	printf("Maximum value: %d\n", max);
    printf("Minimum value: %d\n", min);

	


	getch();
	clrscr();

	return 0;
}
