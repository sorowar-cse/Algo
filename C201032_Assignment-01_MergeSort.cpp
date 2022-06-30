#include<bits/stdc++.h>
using namespace std;

void merge(int ar[],int low, int mid, int high)
{
    int l1, l2, i;
    int b[100032];
    for(l1 = low, l2 = mid + 1, i = low; l1 <= mid && l2 <= high; i++)
    {
        if(ar[l1] <= ar[l2])
            b[i] = ar[l1++];
        else
            b[i] = ar[l2++];
    }
    while(l1 <= mid)
        b[i++] = ar[l1++];

    while(l2 <= high)
        b[i++] = ar[l2++];

    for(i = low; i <= high; i++)
        ar[i] = b[i];
}

void Mergesort(int arr[],int low, int high)
{
    if(low < high)
    {
        int mid = (low + high) / 2;
        Mergesort(arr,low, mid);
        Mergesort(arr,mid+1, high);
        merge(arr,low, mid, high);
    }
    return;
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

    Mergesort(arr,0,n-1);

    end=clock();
    double time_taken=(double)(end-beg)/CLOCKS_PER_SEC;
    cout<<endl<<endl<<time_taken<<endl<<endl;

    for(int  i= 0; i<n; i++)
        cout << arr[i] << " ";

    return 0;
}
