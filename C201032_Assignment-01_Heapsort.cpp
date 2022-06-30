#include<bits/stdc++.h>
using namespace std;

void maxHeap(int arr[], int n, int i)
{
    int large= i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    if (l < n && arr[l] > arr[large])
        large= l;

    if (r < n && arr[r] > arr[large])
        large= r;
    if (large != i)
    {
        swap(arr[i], arr[large]);
        maxHeap(arr, n, large);
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[100032];
    for(int i = 0; i<n; i++)
        cin >> arr[i];

    int start = (n/2)-1;
    for(int i = start; i>=0; i--)
        maxHeap(arr,n,i);

    for(int  i= 0; i<n; i++)
        cout<< arr[i] << " ";
    cout << endl;

    clock_t beg,end;
    double second_elapsed;
    beg=clock();

    for(int i= n-1; i>0; i--) // sort here
    {
        swap(arr[0],arr[i]);
        maxHeap(arr,i,0);
    }

    end=clock();
    double time_taken=(double)(end-beg)/CLOCKS_PER_SEC;
    cout<<endl<<endl<<time_taken<<endl<<endl;

    for(int  i= 0; i<n; i++)
        cout<< arr[i] << " ";

    return 0;
}
