#include<bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out2.txt", "w", stdout);
    int len, k;
    cin >> len >> k;
    string s;
    cin >> s;
    int arr[26] = {0};
    for (int i = 0; i < s.length(); ++i)
    {
        arr[s[i] - 'a']++;
    }
    
    int target = -1;
    for (int i = 0; i < 26; ++i)
    {
        if (arr[i] == k)
            target = i;
    }
    
    if (target == -1 || k < 2)
    {
        cout << s;
    } else
    {
        vector<int> positions;
        vector<string> results;
        char cc = 'a' + target;
        for (int i = 0; i < s.length(); ++i)
        {
            if (s[i] == cc)
                positions.push_back(i);
        }
        
        for (int i = 0; i < positions.size(); ++i)
        {
            string ss = "";
            for (int j = 0; j < s.length(); ++j)
            {
                if (j != positions[i] && s[j] == cc)
                    continue;
                ss += s[j];
            }
            results.push_back(ss);
        }
        
        sort(results.begin(), results.end());
        cout<<results[0];
        
    }
    
    return 0;
}

