// C program to find the maximum number out of the three
// given numbers using if-else statement
#include <stdio.h>

int biggest3()
{
	int A, B, c;

	printf("Enter the numbers A, B and c: ");
	scanf("%d %d %d", &A, &B, &c);

	// finding max using 
	if (A >= B && A >= c)
		printf("%d is the largest number.", A);

	else if (B >= A && B >= c)
		printf("%d is the largest number.", B);

	else
		printf("%d is the largest number.", c);

	//return 0;
}

