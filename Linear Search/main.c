#include <stdio.h>

int main()
{
    int arr[10], i, num, n, c=0, pos;
    printf("\nEnter the array size : ");
    scanf("%d", &n);
    printf("\nEnter Array Elements : ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nEnter the number to be search : ");
    scanf("%d", &num);
    for(i=0; i<n; i++)
    {
        if(arr[i]==num)
        {
            c=1;
            pos=i+1;
            break;
        }
    }
    if(c==0)
    {
        printf("\nNumber not found..!!");
    }
    else
    {
        printf("\nNumber %d found at position %d", num, pos);
    }
    return 0;
}