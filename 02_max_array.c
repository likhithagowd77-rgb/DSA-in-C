#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int max, i;

    max = arr[0];

    for(i = 1; i < 5; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }

    printf("Maximum = %d", max);

    return 0;
}
