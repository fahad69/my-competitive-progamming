
#include <bits/stdc++.h>

using namespace std;

int powr(int k)
{
    int ans = 1;
    for (int i = 1; i <= k; ++i) {
        ans = ans*2;
    }
    return ans-1;

}

int main() {

    vector<int> pp;
    for (int k = 1; k < 16; ++k) {
        pp.push_back(powr(k));
    }

    /*for (int j = 0; j < pp.size(); ++j) {
        cout<<pp[j]<<" ";
    }*/

    int t;
    cin>>t;
    for (int i = 1; i <= t; ++i) {
        int x;
        cin>>x;
        int ind = pp.size()-1;
        int c = 0;
        while(1)
        {
            if(x==0)
                break;
            if(pp[ind]<=x)
            {
                x = x - pp[ind];
                c++;
            }
            else
                ind--;
        }
        cout<<"Case "<<i<<": "<<c<<endl;
    }

    return 0;
}