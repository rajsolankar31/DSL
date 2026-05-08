#include <stdio.h>

/* Linear Search Function */
int linearSearch(int arr[], int n, int key)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
            return i;
    }
    return -1;
}

/* Binary Search Function */
int binarySearch(int arr[], int n, int key)
{
    int low = 0, high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main()
{
    int n, choice, key, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];   /* C99 supports variable length arrays */

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    do
    {
        printf("\n----- Searching Menu -----\n");
        printf("1. Linear Search\n");
        printf("2. Binary Search\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("Enter element to search: ");
            scanf("%d", &key);

            int result = linearSearch(arr, n, key);

            if (result != -1)
                printf("Element found at position %d\n", result + 1);
            else
                printf("Element not found\n");
        }
        else if (choice == 2)
        {
            printf("NOTE: Binary search requires sorted array.\n");
            printf("Enter element to search: ");
            scanf("%d", &key);

            int result = binarySearch(arr, n, key);

            if (result != -1)
                printf("Element found at position %d\n", result + 1);
            else
                printf("Element not found\n");
        }

    } while (choice != 3);

    return 0;
}
