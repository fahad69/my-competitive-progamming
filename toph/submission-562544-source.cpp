#include <bits/stdc++.h>

using namespace std;

long long factorials[1000001];

void generate_factorials()
{
    factorials[0] = 1;
    for (long long i = 1; i <=20 ; ++i) {
        factorials[i] = (factorials[i-1]*i);
    }
}

int main() {
    long long t;
    cin>>t;
    generate_factorials();

    for (int i = 1; i<=t ; ++i) {

        long long x;
        cin>>x;
        if(x>19)
            cout<<"0000\n";
        else
        {
            string s = to_string(factorials[x]);
            if(s.length()<=4)
            {
                for (int j = 0; j < 4-s.length(); ++j) {
                    cout<<0;
                }
            }
            else
            {
                cout<<s[s.length()-4]<<s[s.length()-3]<<s[s.length()-2]<<s[s.length()-1]<<endl;
                continue;
            }

            cout<<s<<endl;
        }


    }

    return 0;
}
