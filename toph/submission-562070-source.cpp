#include <bits/stdc++.h>

using namespace std;

int arr[4][4];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(nullptr);

    char ch, stray, ch2;

    //arr[0][0]=1;arr[1][1]=1;arr[2][2]=1;arr[3][3]=1;

    for (int i = 0; i < 4; ++i) {
        cin>>ch>>stray>>stray>>ch2;
        if(stray=='-')
            arr[ch2-'A'][ch-'A'] = 1;
        else
            arr[ch-'A'][ch2-'A'] = 1;
    }

    for (int j = 0; j < 4; ++j) {
        for (int i = 0; i < 4; ++i) {
            //cout<<arr[j][i]<<" ";
        }
        //cout << endl;
    }

    for (int j = 0; j < 4; ++j) {
        for (int i = 0; i < 4; ++i) {
            //cout<<arr[j][i]<<" ";
            if(arr[j][i]==1)
            {
                for (int k = 0; k < 4; ++k) {
                    if(arr[i][k]==1)
                        arr[j][k] = 1;
                }
            }
        }

        //cout<<endl;
    }
    for (int j = 0; j < 4; ++j) {
        for (int i = 0; i < 4; ++i) {
            //cout<<arr[j][i]<<" ";
            if(arr[j][i]==1)
            {
                for (int k = 0; k < 4; ++k) {
                    if(arr[i][k]==1)
                        arr[j][k] = 1;
                }
            }
        }

        //cout<<endl;
    }




    int t;
    cin>>t;
    for (int l = 0; l < t; ++l) {
        char c1, c2;
        cin>>c1>>c2;
        int a = c1-'A', b = c2 - 'A';
        if(arr[a][b]==1)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }



}