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
    long long n;
    while (cin >> n)
    {
        n++;
        long long x = pows[upper_bound(pows, pows + 63, n) - pows - 1];
        //cout<<x<<endl;
        cout << 2 * (n - x) + 1 << endl;
        
    }
	return 0;
}