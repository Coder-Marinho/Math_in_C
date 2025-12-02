#include <stdio.h>
#include <stdbool.h>

multiplication()

int main(x, y)
{
	int x,y;
	printf("\t LAST MULTIPLER COMMOM\n");
	printf("Discover the LMC between 2 numbers\n");
	printf("Insert the first number:\t");
	scanf("%d", &x);
	printf("Insert the second number:\t");
	scanf("%d", &y);
	multiplication(x, y);
	printf( xMultiple);

}

int multiplication()
{
	bool multipleCommum = false;
	
	int multiplicator = 2;
	int xMultiple, yMultiple;

	while(multipleCommum == false){
		xMultiple = x * multiplicator;
		yMultiple = y * multiplicator;
		if (xMultiple == yMultiple){
			multipleCommum = true;
		}
		multiplicator++;
	}
	return xMultiple;
}

