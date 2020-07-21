#include <bits/stdc++.h>

using namespace std;


bool sieve[11000000];
int cnt[11000000];

void generate(int n)
{
    sieve[0] = 1;
    sieve[1] = 1;
    for(int i = 2; i<=n; i++)
    {
        if(sieve[i]==0)
        {
            for (int j = 2*i; j <= n ; j=j+i) {
                sieve[j] = 1;
            }
        }

    }
}

int main()
{

    int n, cl, ml;
    cin>>n>>cl>>ml;
    string s = "AC";
    for (int i = 0; i < n; ++i) {
        int a, b, c;
        cin >> a >> b >> c;
        if (b > cl)
        {
            s = "CLE";
            break;
        }
        else if(c>ml)
        {
            s = "MLE";
            break;
        }
        else if (a > 0) {
            s = "WA";
            break;
        }
    }

    cout<<s;




    return 0;
}