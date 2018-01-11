#include <stdio.h>
int main(void) 
{

    int number, reverse = 0, temp = 0;
    scanf(" %d", &number);
    temp = number;
    while(number != 0) {
        reverse = (reverse * 10) + (number % 10);
        number=number/10;
    }
    if(temp == reverse)
        printf("Palindrome");
    else
        printf("Not Palindrome");
}
