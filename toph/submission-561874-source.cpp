#include <bits/stdc++.h>

using namespace std;

bool sieve[8000000];

void generate(int n)
{
    sieve[0] = 1;
    sieve[1] = 1;
    for(int i = 2; i*i<=n; i++)
    {
        if(sieve[i]==0)
        {
            for (int j = 2*i; j <= n ; j=j+i) {
                sieve[j] = 1;
            }
        }

    }
}



int main()
{
    ios_base::sync_with_stdio(0);cin.tie(nullptr);

    generate(100000);
    int t;
    cin>>t;

    for (int i = 1; i <= t; ++i) {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int arr[26] = {0};
        for (int j = 0; j < n; ++j) {
            arr[s[j]-'A']++;
        }

        vector<pair<char, int>> box;

        for (int k = 0; k < 26; ++k) {
            int times = arr[k];
            if(sieve[times]==0)
            {
                char ch = 'A' + k;
                box.emplace_back(ch, times);
            }
        }

        printf("Case %d:\n", i);
        if(box.size()==0)
            printf("Love is painful !\n");
        else
        {
            for (int j = 0; j < box.size(); ++j) {
                printf("%c = %d\n", box[j].first, box[j].second);
            }
        }
    }



    return 0;
}