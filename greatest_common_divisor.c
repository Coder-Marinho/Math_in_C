#include <stdio.h>

int main()
{
	int numberX, numberY, rest;
	printf("Enter with the numbers\t");
	scanf("%d %d", &numberX, &numberY);
	
	while(numberY != 0){
		rest = numberX % numberY;
		numberX = numberY;
		numberY = rest;
	}

	printf("The greatest common divisor is: %d", numberX);
	return 0;
}
