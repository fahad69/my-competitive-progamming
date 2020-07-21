#include <bits/stdc++.h>

using namespace std;

bool cmp(int a, int b)
{
    return a>b;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(nullptr);

    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int x;
        cin>>x;
        vector<int> pp;
        for (int j = 0; j < x; ++j) {
            int xx;
            cin>>xx;
            pp.push_back(xx);
        }

        int c = 0;
        
        for (int k = 0; k < pp.size()-1; ++k) {
            if(pp[k]==pp[k+1])
                c++;
        }
        
        if(c==pp.size()-1)
        {
            cout<<"neutral"<<endl;
            continue;
        }

        if(is_sorted(pp.begin(), pp.end()))
        {
            cout<<"allGoodDays"<<endl;
            continue;
        }
        if( is_sorted(pp.begin(), pp.end(), cmp ) )
        {
            cout<<"allBadDays"<<endl;
            continue;
        }

        vector<int> poss;
        for (int k = 1; k < pp.size()-1; ++k) {
            if(pp[k]>pp[k+1] && pp[k]>pp[k-1])
                poss.push_back(k);
        }

        if(poss.size()<2)
            cout<<"none\n";
        else
        {
            int mx = -1;
            for (int j = 0; j < poss.size()-1; ++j) {
                mx = max(poss[j+1]-poss[j], mx);
            }

            cout<<mx-1<<endl;
        }


    }




}