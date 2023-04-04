#include <stdio.h>
#include <conio.h>

void main()
{
    int second_largest(int[50], int);
    int arr[50], i, n;
    clrscr();
    printf("Enter a size of array: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    second_largest(arr, n);
    getch();
}

int second_largest(int ar[50], int x)
{
    int max = ar[0];
    int sec_max = ar[0];
    int i;
    for (i = 0; i < x; i++)
    {
        if (ar[i] > max)
        {
            max = ar[i];
        }
    }

    printf("Largest number is %d\n", max);

    for (i = 0; i < x; i++)
    {
        if (ar[i] == max)
        {
            continue;
        }
        else if (ar[i] > sec_max)
        {
            sec_max = ar[i];
        }
    }
    printf("Second Max number in array is %d", sec_max);
    return 0;
}