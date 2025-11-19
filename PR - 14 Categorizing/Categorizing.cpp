#include <iostream>
using namespace std;

class Categorizing
{
private:
    int size;
    int *arr;

public:
    // constructor
    Categorizing(int n)
    {
        size = n;
        arr = new int[size];
    }

    // input
    void input()
    {
        for (int i = 0; i < size; i++)
        {
            cout << "arr[" << i << "] = ";
            cin >> arr[i];
        }
    }

    // display
    void display()
    {
        cout << endl
             << "Array : ";
        for (int i = 0; i < size; i++)
            cout << arr[i] << " ";
        cout << endl;
    }

    // ------------------------------
    // Selection Sort ASC / DESC
    // ------------------------------

    void selectionSortAsc()
    {
        for (int i = 0; i < size - 1; i++)
        {
            int minIndex = i;

            for (int j = i + 1; j < size; j++)
            {
                if (arr[j] < arr[minIndex])
                    minIndex = j;
            }

            swap(arr[i], arr[minIndex]);
        }
        cout << endl
             << "Selection Sort Ascending Completed." << endl;
    }

    void selectionSortDesc()
    {
        for (int i = 0; i < size - 1; i++)
        {
            int maxIndex = i;

            for (int j = i + 1; j < size; j++)
            {
                if (arr[j] > arr[maxIndex])
                    maxIndex = j;
            }

            swap(arr[i], arr[maxIndex]);
        }
        cout << endl
             << "Selection Sort Descending Completed." << endl;
    }

    // ------------------------------
    // MERGE SORT (ASC + DESC)
    // ------------------------------

    void mergeAsc(int start, int mid, int end)
    {
        int n1 = mid - start + 1;
        int n2 = end - mid;

        int left[n1], right[n2];

        for (int i = 0; i < n1; i++)
            left[i] = arr[start + i];

        for (int j = 0; j < n2; j++)
            right[j] = arr[mid + 1 + j];

        int i = 0, j = 0, k = start;

        while (i < n1 && j < n2)
        {
            if (left[i] <= right[j])
                arr[k++] = left[i++];
            else
                arr[k++] = right[j++];
        }

        while (i < n1)
            arr[k++] = left[i++];

        while (j < n2)
            arr[k++] = right[j++];
    }

    void mergeDesc(int start, int mid, int end)
    {
        int n1 = mid - start + 1;
        int n2 = end - mid;

        int left[n1], right[n2];

        for (int i = 0; i < n1; i++)
            left[i] = arr[start + i];

        for (int j = 0; j < n2; j++)
            right[j] = arr[mid + 1 + j];

        int i = 0, j = 0, k = start;

        while (i < n1 && j < n2)
        {
            if (left[i] >= right[j])
                arr[k++] = left[i++];
            else
                arr[k++] = right[j++];
        }

        while (i < n1)
            arr[k++] = left[i++];

        while (j < n2)
            arr[k++] = right[j++];
    }

    void mergeSortAsc(int start, int end)
    {
        if (start < end)
        {
            int mid = (start + end) / 2;
            mergeSortAsc(start, mid);
            mergeSortAsc(mid + 1, end);
            mergeAsc(start, mid, end);
        }
    }

    void mergeSortDesc(int start, int end)
    {
        if (start < end)
        {
            int mid = (start + end) / 2;
            mergeSortDesc(start, mid);
            mergeSortDesc(mid + 1, end);
            mergeDesc(start, mid, end);
        }
    }

    // ------------------------------
    // SEARCHING
    // ------------------------------

    void linearSearch()
    {
        int key;
        cout << "Enter value to search: ";
        cin >> key;

        for (int i = 0; i < size; i++)
        {
            if (arr[i] == key)
            {
                cout << "Found at index " << i << endl;
                return;
            }
        }
        cout << "Not Found!" << endl;
    }

    void binarySearch()
    {
        int key;
        cout << "Enter value to search: ";
        cin >> key;

        int start = 0, end = size - 1;

        while (start <= end)
        {
            int mid = (start + end) / 2;

            if (arr[mid] == key)
            {
                cout << "Found at index " << mid << endl;
                return;
            }
            else if (key > arr[mid])
                start = mid + 1;
            else
                end = mid - 1;
        }
        cout << "Not Found!" << endl;
    }

    // destructor
    ~Categorizing()
    {
        delete[] arr;
    }
};