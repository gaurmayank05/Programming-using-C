#include <stdio.h>
#include <conio.h>
void main()
{
    int n, i, fib, a = 0, b = 1;
    clrscr();
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("%d\t%d\t", a, b);
    for (i = 0; i <= n; i++)
    {
        fib = a + b;
        printf("%d\t", fib);
        a = b;
        b = fib;
    }
    getch();
}