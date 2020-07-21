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
    
    for (int i = 0; i < 64; ++i)
    {
        cout<<pows[i]<<endl;
    }

    /*long long n;
    cin>>n;
    ####important#### cout<<pows[lower_bound(pows, pows+63, n)-pows]<<endl;
    ####important#### cout<<pows[upper_bound(pows, pows+63, t)-pows-1]<<endl;*/
    
    return 0;
}