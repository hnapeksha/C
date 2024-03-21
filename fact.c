#include <stdio.h>
int factorial() {
    int a, i;
    unsigned long long fact = 1;
    printf("Enter an integer: ");
    scanf("%d", &a);

    // shows error if the user enters a negative integer
    if (a < 0)
        printf("Error! Factorial of a negative number doesn't exist.");
    else {
        for (i = 1; i <= a; ++i) {
            fact *= i;
        }
        printf("Factorial of %d = %llu", a, fact);
    }

   //return 0;
}

