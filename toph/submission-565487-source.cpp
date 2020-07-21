
#include<bits/stdc++.h>

using namespace std;

unsigned long long pows[64];

void make_powers()
{
    pows[0] = 1;
    for (int i = 1; i < 64; ++i)
    {
        pows[i] = pows[i - 1] * 2;
    }
}

int main()
{
    make_powers();

    int t;
    cin>>t;

    for (int i = 0; i < t; ++i)
    {
        long long a, b;
        cin>>a>>b;
        int ind_lo = lower_bound(pows, pows+63, a)-pows;
        int ind_hi = upper_bound(pows, pows+63, b)-pows-1;

        long long sum = 0;
        for (int j = ind_lo; j <= ind_hi ; ++j)
        {
            sum+= pows[j];
        }
        cout<<sum<<endl;
    }





    /*for (int j = 1; j <=n ; ++j)
    {
        int sum = 0;
        for (int i = 1; i <= j; ++i)
        {
            //cout<<i<<" : "<<j%i<<endl;
            sum += j%i;
        }

        cout<<"I: "<<j<<" sum: "<<sum<<endl;
    }
    */
}