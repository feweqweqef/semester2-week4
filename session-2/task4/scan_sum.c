
#include <stdio.h>

int main( void ) {

    // define suitable data

    int num1, num2;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    int sum = num1 + num2;
    printf("The sum of %d and %d is %d\n", num1, num2, sum);

    // use scanf to read from the terminal
    // print the output from scanf and the data values 
    return 0;
}