#include <bits/stdc++.h>

using namespace std;

int powr(int n)
{
    if(n==0)
        return 1;
    int p = 2;
    for (int i = 1; i < n; ++i) {
        p = p*2;
    }

    return p;
}

int main()
{
    //freopen("in.txt", "r", stdin);
    int x, y;
    cin>>x>>y;
    int c = 0;
    int a[x+2][y+2];

    for (int k = 0; k < x+1; ++k) {
        for (int i = 0; i < y+1 ; ++i) {
            a[k][i] = 0;
        }
    }

    for (int i = 1; i <= x ; ++i) {
        for (int j = 1; j <= y ; ++j) {
            char x;
            cin>>x;
            a[i][j] = x;
        }
    }

    for (int i = 1; i <= x ; ++i) {
        for (int j = 1; j <= y ; ++j) {
            if(a[i+1][j] != '*' && a[i-1][j] != '*' && a[i][j+1] != '*' && a[i][j-1] != '*')

            {
                if(a[i][j]=='.')
                    c++;
            }
        }
    }

    for (int i = 1; i <= x ; ++i) {
        for (int j = 1; j <= y ; ++j) {
            //cout<<a[i][j];
        }
        //cout<<endl;
    }

    cout<<c;

    return 0;
}