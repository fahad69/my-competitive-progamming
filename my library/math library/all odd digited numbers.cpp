#include <bits/stdc++.h>
using namespace std;

vector<int> pp;

void build(int n)
{
    if(n >= 100000)
        return;
    //if(ifPrime(n))
        //vals.pb(n);
        //cout<<n<<endl;
        pp.push_back(n);
    for(int i = 1; i <= 9; i += 2)
        build(n * 10 + i);
}

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
 
    build(0);
    cout<<pp.size();
    return 0;
}