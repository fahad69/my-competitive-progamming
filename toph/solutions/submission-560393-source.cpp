#include <bits/stdc++.h>

using namespace std;



int main() {
    //freopen("out.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;

    for (int i = 0; i < t; ++i) {
        string s;
        cin>>s;

        string t1 = "", t2 = "";
        vector<int> flag;

        for (int j = 0; j < s.length(); ++j)
        {
            if(s[j]<='z' && s[j]>='a')
            {
                flag.push_back(0);
                t1 += s[j];
            }
            else if(s[j]<='9' && s[j]>='0')
            {
                flag.push_back(1);
                t2 += s[j];
            }
        }

        sort(t1.begin(), t1.end());
        sort(t2.begin(), t2.end());

        int l1 = 0, l2 = 0;
        for (int k = 0; k < s.length() ; ++k)
        {
            if(flag[k]==0)
            {
                cout<<t1[l1];
                l1++;
            }
            else
            {
                cout<<t2[l2];
                l2++;
            }
        }

        cout<<endl;
    }

    return 0;
}