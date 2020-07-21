#include <bits/stdc++.h>

using namespace std;


long long gcd(long long a, long long b)
{
    if( b==0 )
        return a;
    return gcd(b, a%b);
}

long long lcm(long long a, long long b)
{
    return (a*b)/gcd(a,b);
}


int main()
{
    ios_base::sync_with_stdio(0);cin.tie(nullptr);


    int a, b;
    cin>>a>>b;
    char arr[a][b];
    int flag1 = 0, row;
    int start, end;

    for (int i = 0; i < a; ++i) {
        for (int j = 0; j < b; ++j) {
            cin>>arr[i][j];
            if(arr[i][j]=='=' && flag1==0)
            {
                //cout<<"yes"<<endl;
                flag1 = 1;
                start = j;
                row = i;
            }
            if(arr[i][j]=='=')
            {
                end = j;
            }
        }
    }


    int cc = 0;
    for (int k = 0; k < row; ++k) {
        for (int i = start; i <= end ; ++i) {
            if(arr[k][i]=='O')
                cc++;
        }
    }
    cout<<cc;






    return 0;
}