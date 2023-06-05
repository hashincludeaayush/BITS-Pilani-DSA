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
    printf("\nEnter the position at which number to be delete : ");
    scanf("%d", &pos);
    for(i=pos-1; i<n-1; i++)
    {
        num =arr[i];
        arr[i]=arr[i+1];
    }
    printf("\nThe array after deletion of %d is :- \n", num);
    for(i=0; i<n-1; i++)
    {
        printf("\n %d", arr[i]);
    }
    return 0;
}