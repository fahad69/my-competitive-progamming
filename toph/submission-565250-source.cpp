#include <bits/stdc++.h>
using namespace std;

int main()
{


    int arr[11] = {0};

    int n;
    cin>>n;
    if(n==0)
    {
        cout<<"Sorry Kadzz!";
        return 0;
    }
    for (int i = 0; i < n; ++i) {
        int x;
        cin>>x;
        arr[x]++;
    }

    int cnt = 0;
    for (int j = 1; j <=10 ; ++j) {
        if(arr[j]==1)
            cnt++;
    }

    if(cnt==1)
    {
        for (int i = 1; i <=10 ; ++i) {
            if(arr[i]==1)
            {
                cout<<i<<endl;
                cout<<"Nusrat weds Kadzz!";
            }
        }
    }
    else
        cout<<"Sorry Kadzz!";

    return 0;
}