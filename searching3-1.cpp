#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key)
{
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == key)
            return i;
    }
    return -1;
}

int binarySearch(int arr[], int n, int key)
{
    int low = 0, high = n - 1;

    while(low <= high)
    {
        int mid = (low + high) / 2;

        if(arr[mid] == key)
            return mid;
        else if(arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main()
{
    int n, choice, key;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements:\n";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    do
    {
        cout << endl<<"----- Searching Menu -----"<<endl;
        cout << "1. Linear Search"<<endl;
        cout << "2. Binary Search"<<endl;
        cout << "3. Exit"<<endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if(choice == 1)
        {
            cout << "Enter element to search: ";
            cin >> key;

            int result = linearSearch(arr, n, key);

            if(result != -1)
                cout << "Element found at position " << result + 1 << endl;
            else
                cout << "Element not found"<<endl;
        }

        else if(choice == 2)
        {
            cout << "NOTE: Binary search requires sorted array."<<endl;

            cout << "Enter element to search: ";
            cin >> key;

            int result = binarySearch(arr, n, key);

            if(result != -1)
                cout << "Element found at position " << result + 1 << endl;
            else
                cout << "Element not found"<<endl;
        }

    } while(choice != 3);

    return 0;
}
