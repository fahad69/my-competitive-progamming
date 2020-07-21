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
    int m;
    cin>>m;
    //getchar();
    vector<string> lines;
    for (int i = 1; i <= 2*t+1 ; ++i) {
       string s;
       getline(cin, s);


       s.erase( remove(s.begin(), s.end(), ' '), s.end());

       if(i!=1)
       lines.push_back(s);
    }

    sort(lines.begin(), lines.end(), cmp);


    for (int j = 0; j < lines.size()/2; ++j) {
        //cout<<lines[j].size()+lines[lines.size()-j-1].size()<<endl;
        if(lines[j].size()+lines[lines.size()-j-1].size()>m)
        {
            cout<<"NO";
            return 0;
        }
    }

    cout<<"YES";


    return 0;
}