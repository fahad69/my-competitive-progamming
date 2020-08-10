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
        int arr[26] = {0};
        for (int j = 0; j < s.size(); ++j)
        {
            arr[s[j]-'a']++;
        }
        int cnt = -1, ind = -1;
        for (int j = 0; j < 26; ++j)
        {
            if(arr[j]>cnt)
            {
                cnt = arr[j];
                ind = j;
            }
        }
        
        cout<<s.size()-cnt<<endl;
        for (int j = 0; j < s.size(); ++j)
        {
            char c = 'a'+ind;
            cout<<c;
        }
        cout<<endl;
        
    }
    
    return 0;
}

