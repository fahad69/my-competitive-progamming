
#include <bits/stdc++.h>

using namespace std;


__int128 mygcd(__int128 a, __int128 b)
{
    if( b==0 )
        return a;
    return mygcd(b, a%b);
}

int main() {
    long long t;
    cin>>t;
    for (int i = 1; i<=t ; ++i) {
        long long rr, aa, bb, dd, rres;
         __int128 r, a, b, d, r_a, r_b, r_a_b, res, lcc;
        cin>>rr>>aa>>bb>>dd;
		r = rr, a = aa, b = bb, d = dd;
        r_a = (a*( (( (r/a)*(r/a+1))/2)%d ) )%d;
        r_b = (b*( (( (r/b)*(r/b+1))/2)%d ) )%d;
        lcc = (a/mygcd(a,b))*b;
        r_a_b = r/lcc;
        r_a_b = ((lcc%d) *( ((r_a_b*(r_a_b+1))/2)%d))%d;
        res = (((r_a + r_b) - r_a_b) +d )%d;
		rres = res;
        cout<<rres<<"\n";
    }

    return 0;
}