#include <bits/stdc++.h>

using namespace std;



int main()
{

    long long n, ans = 1;
    cin>>n;
    int arr[4] = {0};
    if(n>=20)
        cout<<0;
    else
    {
        for(long long i = 1; i<=n; i++)
        {
            ans = ans*i;
        }
        for(int p = 0; p<4; p++)
        {
            int x = ans % 10;
            ans = ans/10;
            arr[p] = x;
        }

        int result = arr[3]*1000+arr[2]*100+arr[1]*10+arr[0];
        cout<< result;
    }



    return 0;
}