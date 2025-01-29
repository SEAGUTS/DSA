#include <iostream>
using namespace std;
void merge(int a[], int s, int e)
{
    int mid = (s + e) / 2;
    int len1 = mid - s + 1;
    int len2 = e - mid;
    int *first = new int[len1];
    int *second = new int[len2];
    int k = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = a[k++];
    }
    k = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = a[k++];
    }
    int index1 = 0;
    int index2 = 0;
    k = s;
    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            a[k++] = first[index1++];
        }
        else
        {
            a[k++] = second[index2++];
        }
    }
    while (index1 < len1)
    {
        a[k++] = first[index1++];
    }
    while (index2 < len2)
    {
        a[k++] = second[index2++];
    }
    delete[] first;
    delete[] second;
}
void mergesort(int a[], int s, int e)
{
    if (s >= e)
    {
        return;
    }

    int mid = (s + e) / 2;
    mergesort(a, s, mid);
    mergesort(a, mid + 1, e);
    merge(a, s, e);
}
int main()
{
    int arr[5] = {3, 7, 2, 1, 5};
    int n = 5;

    mergesort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}