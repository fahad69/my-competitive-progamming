#include <bits/stdc++.h>

using namespace std;


int main()
{
    ios_base::sync_with_stdio(0);cin.tie(nullptr);


    int t;
    cin>>t;

    for (int i = 1; i <= t ; ++i) {
        double r, ab;
        cin>>r>>ab;
        double A;
        A = acos((2*r*r -ab*ab)/(2*r*r))*180/acos(-1.0);

        printf("Case %d: %.4lf\n", i, (180-A)/2.0);
    }


    return 0;
}