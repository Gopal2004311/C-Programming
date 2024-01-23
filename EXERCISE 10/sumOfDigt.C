/* write a program to calculate sum of digit using user defined function */
#include <stdio.h>
#include <conio.h>
void sumOfDigit(int n)
{
    int sum = 0, d;
    while (n > 0)
    {
        d = n % 10;
        sum = sum + d;
        n = n / 10;
    }
    printf("\n sum of digit:%d", sum);
}
int main()
{
    int num;
    printf("\n enter any number:");
    scanf("%d", &num);
    sumOfDigit(num);
    getch();
    return 0;
}