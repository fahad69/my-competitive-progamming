#include <bits/stdc++.h>

using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;

    for (int i = 1; i <=t ; ++i) {
        int l;
        cin>>l;
        string s;
        cin>>s;
        int arr[26] = {0};
        for (int j = 0; j < s.length(); ++j) {
            if(s[j]<='z' && s[j]>='a')
            arr[s[j]-'a']++;
        }

        cout<<"Case "<<i<<":\n";
        int flag = 0;
        for (int k = 0; k < 26; ++k) {
            if(arr[k]!=0)
            {
                flag = 1;
                char c = k + 'a';
                cout<<c<<" - "<<arr[k]<<"\n";
            }
        }
        if(flag==0)
            cout<<"-1\n";
        cout<<"\n";
    }


    return 0;
}

