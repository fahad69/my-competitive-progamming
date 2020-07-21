#include <bits/stdc++.h>

using namespace std;

int indexes[100007][26];

void do_calculation(string s)
{
    int len = s.length();

    for (int i = 0; i < 26 ; ++i) {
        indexes[len][i] = len;
    }

    for (int j = len - 1; j >= 0; j--) {
        for (int i = 0; i < 26; ++i) {
            indexes[j][i] = indexes[j+1][i];
        }
        indexes[j][s[j]-'a'] = j;
    }
}

bool find_it(string s, int ll)
{
    int curr = 0;

    for (int i = 0; i < s.length(); ++i) {
        if(indexes[curr][s[i]-'a']>=ll)
            return false;

        else
            curr = indexes[curr][s[i]-'a'] + 1;
    }

    return true;

}

int main() {
    //freopen("out.txt", "r", stdin);
    //ios_base::sync_with_stdio(0);
    //cin.tie(0);
    int l;
    string s;
    cin>>l;
    cin>>s;
    do_calculation(s);

    int q;
    cin>>q;

    for (int i = 0; i < q; ++i) {
        string target;
        cin>>target;
        if(find_it(target, l))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }


    return 0;
}