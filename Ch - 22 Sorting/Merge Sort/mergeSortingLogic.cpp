#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &a, int start, int mid, int end)
{
    int i = start;
    int j = mid + 1;
    vector<int> temp;

    while (i <= mid && j <= end)
    {
        if (a[i] < a[j])
        {
            temp.push_back(a[i]);
            i++;
        }
        else
        {
            temp.push_back(a[j]);
            j++;
        }
    }

    while (i <= mid)
    {
        temp.push_back(a[i]);
        i++;
    }

    while (j <= end)
    {
        temp.push_back(a[j]);
        j++;
    }

    for (int i = 0; i < temp.size(); i++)
    {
        a[i + start] = temp[i];
    }
}

void mergeSort(vector<int> &a, int start, int end)
{
    int mid;
    if (start < end)
    {
        mid = (start + end) / 2;

        mergeSort(a, start, mid);   // left
        mergeSort(a, mid + 1, end); // right

        merge(a, start, mid, end);
    }
}