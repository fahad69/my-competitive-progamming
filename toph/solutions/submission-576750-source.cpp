#include<bits/stdc++.h>

using namespace std;


int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out2.txt", "w", stdout);
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        string s;
        cin>>s;
        int c1 = 0, c2 = 0, c3 = 0;
        for (int j = 0; j < s.size(); ++j)
        {
            if(islower(s[j]))
                c1++;
            if(isupper(s[j]))
                c2++;
            if(s[j]>='0' && s[j]<='9')
                c3++;
        }
        
        cout<<"Case "<<i+1<<": "<<min(c1,c2)+c3<<"\n";
    }
    
    return 0;
}

