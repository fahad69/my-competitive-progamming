#include <bits/stdc++.h>
using namespace std;


int main()
{

    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int n;
        cin>>n;
        int k;
        cin>>k;
        int mina = 0, raju = 0;
        int arr[n];
        for (int j = 0; j < n; ++j) {
            int x;
            cin>>x;
            arr[j] = x;
        }
        for (int j = 0; j < n; ++j) {

            if (j % 2 == 0)
                mina += arr[j];
            else
                raju += arr[j];

            if (mina >= k) {
                cout<<"Mina Win\n";
                break;
            }
            if (raju >= k)
            {
                cout << "Raju Win\n";
                break;
            }
        }
        if(mina<k && raju <k)
            cout<<"Mithu Win\n";
        
    }

    return 0;
}