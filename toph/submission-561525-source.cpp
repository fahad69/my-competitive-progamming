#include <bits/stdc++.h>

using namespace std;

bool cmp(string a, string b)
{
    return a.size()<b.size();
}


int main()
{
    ios_base::sync_with_stdio(0);cin.tie(nullptr);


    int t;
    cin>>t;

    for (int i = 0; i < t; ++i) {
        int len;
        cin>>len;
        string s;
        cin>>s;

        int c = 0;

        for (int j = 0; j < s.size() ; ++j) {
            int zero_count = 0;
            while(s[j]=='0')
            {
                if(j>s.size()-1)
                    break;
                zero_count++;
                j++;
            }
            //cout<<zero_count<<endl;
            if(s[j]=='1' && zero_count%2==1)
                c++;
        }


        cout<<c<<endl;

    }


    return 0;
}