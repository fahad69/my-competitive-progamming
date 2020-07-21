#include<bits/stdc++.h>

using namespace std;

int main() {

    string s;

    while(getline(cin,s))
    {
        //cout<<s<<endl;
        int ans = 0;
        int count1 = 0, count2 = 0, count3 = 0;
        for (int i = 0; i < s.length(); ++i) {
            if(s[i]<='z' && s[i]>='a')
                count1++;
            else if(s[i]<='Z' && s[i]>='A')
                count2++;
            else if(s[i]<='9' && s[i]>='0')
                count3++;

            if(count1>0 && count2>0 && count3>0)
            {
                ans++;
                count1 = 0, count2 = 0, count3 = 0;
            }
        }
        cout<<ans<<endl;
    }



    int p = 2;
    return 0;
}