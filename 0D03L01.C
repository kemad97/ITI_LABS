
//Power

#include <stdio.h>
#include <conio.h>

int pw(int base , int power)
{
	int res=1;
	if (power ==1)
	{
		return base ;
	}


	res=res* pw (base,power-1);
	return res*base;


}

int main() {



	printf("result is :%d",pw(2,4)) ;

	getch();
	clrscr();





	return 0;
}
