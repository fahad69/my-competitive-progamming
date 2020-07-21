#include <bits/stdc++.h>

using namespace std;

long long maxx(long long a, long long b)
{
    if (a>b)
        return a;
    else
        return b;
}


int main()
{
    long long a, b;
    while(cin>>a && cin>>b)
    {
        long long x, y;
        y = a>b?a:b;
        x = a<b?a:b;
        printf("Sum of %lld to %lld is -> ", x, y);
        cout<<(y*y+y-x*x-x)/2+x<<";\n";
    }


}

