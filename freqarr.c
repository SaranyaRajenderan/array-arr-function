#include <stdio.h>

int main()
{
    int a[10], n, i, search;
    int count = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter element: ");
    scanf("%d", &search);

    for(i = 0; i < n; i++)
    {
        if(a[i] == search)
        {
            count++;
        }
    }

    printf("Frequency = %d", count);

    return 0;
}
