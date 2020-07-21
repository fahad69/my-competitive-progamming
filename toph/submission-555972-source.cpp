#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin>>n;
    double x = 0;
    for (int i = 1; i <= n ; ++i) {
        double temp;
        cin>>temp;
        x += temp;
        cout<<x/i<<endl;
    }



    return 0;
}