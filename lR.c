#include <stdio.h>

void linearSearch(int a[], int n, int search)
{
    int i, found = 0;

    for(i = 0; i < n; i++)
    {
        if(a[i] == search)
        {
            printf("Element found at position %d", i + 1);
            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Element not found");
    }
}

int main()
{
    int a[10], n, i, search;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &search);

    linearSearch(a, n, search);

    return 0;
}
