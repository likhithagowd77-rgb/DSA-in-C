#include<stdio.h>
int main()
{
    int array[5]={10,20,30,40,50};
    int i;
    printf("Original array: ");
    for(i=0;i<5;i++)
    {
        printf("%d ",array[i]);
    }
    printf("\nReversed array: ");
    for(i=4;i>=0;i--)
    {
        printf("%d ",array[i]);
    }
    return 0;
}