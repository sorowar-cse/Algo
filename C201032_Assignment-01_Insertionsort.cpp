#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n)
{
    int key;
    for (int i= 1; i < n; i++)
    {
        key= arr[i];
        int  j= i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j+1]= arr[j];
            j= j - 1;
        }
        arr[j+1]= key;
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n + 32];

    for(int i = 0; i<n; i++)
        cin >> arr[i];

    clock_t beg,end;
    double second_elapsed;
    beg=clock();

    insertionSort(arr,n);

    end=clock();
    double time_taken=(double)(end-beg)/CLOCKS_PER_SEC;
    cout<<endl<<endl<<time_taken<<endl<<endl;

    for(int  i= 0; i<n; i++)
        cout << arr[i] << " ";

    return 0;
}
