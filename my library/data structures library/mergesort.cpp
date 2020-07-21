#include<bits/stdc++.h>
using namespace std;

void mymerge(int a[], int l, int mid, int h);

void mergesort(int a[], int l, int h)
{
    if(l<h)
    {
        int mid = (l+h)/2;
        mergesort(a, l, mid);
        mergesort(a, mid+1, h);
        mymerge(a, l, mid, h);
    }
}

void mymerge(int a[], int l, int mid, int h)
{
    int i = l, j = mid + 1, k = 0;
    int m[h-l+1];
    int n = l;
    while(i<=mid && j<=h)
    {
        if(a[i]<a[j])
            m[k++] = a[i++];

        else
            m[k++] = a[j++];
    }

    while (i <= mid)
        m[k++] = a[i++];
    while (j <= h)
        m[k++] = a[j++];

    for(int p = 0; p<h-l+1; p++)
        a[n++] = m[p];

}

int main()
{
    int n;
    cin>>n;
    int a[n];

    for(int i = 0; i<n; i++)
        cin>>a[i];

    mergesort(a, 0, n-1);


    for(int i = 0; i<n; i++)
        cout<<a[i]<<" ";

    return 0;
}
