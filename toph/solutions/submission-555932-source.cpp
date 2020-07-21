#include <bits/stdc++.h>

using namespace std;



int main()
{
    
    int N, D;
    cin>>N>>D;
    int p = N%D;
    int q = N/D;
    
    cout<<q<<" "<<p<<" "<<D;

    return 0;
}