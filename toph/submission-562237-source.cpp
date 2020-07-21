
#include <bits/stdc++.h>

using namespace std;

bool cmp(string a, string b)
{
    return a<b;
}

int main()
{

    int t;
    cin>>t;
    for (int i = 1; i <= t; ++i) {

        int n, m;
        cin>>n>>m;
        char a[n][m];
        for (int j = 0; j < n; ++j)
        {
            for (int k = 0; k < m; ++k)
            {
                cin>>a[j][k];
            }
        }

        vector<string> pp;

        for (int l = 0; l < n; ++l) {

            for (int j = 0; j < m; ++j) {
                string ss = "";
                while(a[l][j]!='X')
                {
                    if(j==m)
                        break;
                    ss += a[l][j];
                    j++;
                }
                if(ss.length()>1)
                    pp.push_back(ss);
            }
        }


        for (int j = 0; j < m; ++j){

            for (int l = 0; l < n; ++l){
                string ss = "";
                while(a[l][j]!='X')
                {
                    if(l==n)
                        break;
                    ss += a[l][j];
                    l++;
                }
                if(ss.length()>1)
                    pp.push_back(ss);
            }
        }

        sort(pp.begin(), pp.end(), cmp);

        cout<<"Case "<<i<<": ";
        cout<<pp[0]<<endl;

    }
    return 0;
}