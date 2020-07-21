#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, m;
    cin>>n>>m;

    int arr[n+2][m+2];
    for (int i = 0; i < n + 2 ; ++i) {
        for (int j = 0; j < m + 2 ; j++) {
            arr[i][j] = 0;
        }
    }

    for (int i = 1; i <= n  ; i++) {
        for (int j = 1; j <= m  ; j++) {
            char x;
            cin>>x;
            arr[i][j] = x;
            //cout<<arr[i][j];
        }
        //cout<<endl;
    }

    for (int i = 1; i <= n  ; ++i) {
        for (int j = 1; j <= m  ; ++j) {
             //(arr[i+1][j]=='*') + (arr[i-1][j]=='*') + (arr[i][j+1]=='*') + (arr[i][j-1]=='*');
             //(arr[i+1][j+1]=='*') + (arr[i-1][j+1]=='*') + (arr[i+1][j-1]=='*') + (arr[i-1][j-1]=='*');

        }
    }



    return 0;
}