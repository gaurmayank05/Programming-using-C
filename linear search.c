#include <stdio.h>
#include <conio.h>

void main()
{
    int linear_search(int[50], int);
    int arr[50], i, n;
    clrscr();
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("\nEnter the elements of array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    linear_search(arr, n);
    getch();
}

int linear_search(int ar[50], int x)
{
    int n, i;
    printf("\nEnter the search number: ");
    scanf("%d", &n);
    for (i = 0; i < x; i++)
    {
        if (ar[i] == n)
        {
            printf("\nSearch number is at position %d", i + 1);
            break;
        }
        else if (i + 1 == x)
        {
            printf("Search number is not in the provided array");
        }
    }
    return 0;
}