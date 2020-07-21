#include<bits/stdc++.h>

using namespace std;

vector<int> give_factors(int n)
{
    vector<int> f;

    for(int i = 2; i*i<=n; i++)
    {
        while(n%i==0)
        {
            f.push_back(i);
            n = n/i;
        }
    }

    if(n>1)
        f.push_back(n);
    return f;
}

int main() {

    vector<int> factors[101];

    for(int i = 2; i<=100; i++)
    {
        factors[i] = give_factors(i);
    }

    int t;
    cin>>t;
    for (int j = 0; j < t ; ++j) {
        int factors_count[101] = {0};
        int n;
        cin>>n;
        for (int i = 0; i < n ; ++i) {
            int x;
            cin>>x;
            if(x == 1)
                continue;
            else
            {
                vector<int> temp = factors[x];
                for (int k = 0; k < temp.size() ; ++k) {
                    factors_count[temp[k]]++;
                }
            }

        }

        int flag = 1;
        for (int l = 2; l <= 100 ; l++) {
            //cout<<factors_count[l]<<" ";
            if(factors_count[l]%2!=0)
            {
                flag = 0;
                break;
            }
        }

        if(flag == 1)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

    return 0;
}