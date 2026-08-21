#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int min, i;

    min = arr[0];

    for(i = 1; i < 5; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }

    printf("Minimum = %d", min);

    return 0;
}
