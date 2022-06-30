#include<bits/stdc++.h>
using namespace std;

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);
    for (int j = low; j < high; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int mid = partition(arr, low, high);
        quickSort(arr, low, mid - 1);
        quickSort(arr, mid + 1, high);
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n+32];

    for(int i = 0; i<n; i++)
        cin >> arr[i];

    clock_t beg,end;
    double second_elapsed;
    beg=clock();

    quickSort(arr,0,n-1);

    end=clock();
    double time_taken=(double)(end-beg)/CLOCKS_PER_SEC;
    cout<<endl<<endl<<time_taken<<endl<<endl;

    for(int i = 0; i<n; i++)
        cout << arr[i] << " ";

    return 0;
}
