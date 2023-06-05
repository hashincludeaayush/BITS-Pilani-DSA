#include <stdio.h>

int main()
{
    int arr[100], i, num, n, pos;
    printf("\nEnter the array size : ");
    scanf("%d", &n);
    printf("\nEnter Array Elements :- \n");
    for(i=0; i<n; i++)
    {
        scanf("\n %d", &arr[i]);
    }
    printf("\nEnter the number to be insert : ");
    scanf("%d", &num);
    printf("\nEnter the position at which number to be added : ");
    scanf("%d", &pos);
    for(i=n-1; i>=pos-1; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos-1]=num;
    printf("\nThe array after insertion of %d is :- \n", num);
    for(i=0; i<=n; i++)
    {
        printf("\n %d", arr[i]);
    }
    return 0;
}

