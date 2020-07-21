#include <bits/stdc++.h>

using namespace std;

vector<int> indexes[26];

void do_calculation(string s)
{
    for (int i = 0; i < s.length(); ++i) {
        int index = s[i] - 'a';
        indexes[index].push_back(i);
    }
}

bool find_it(string s)
{
    int curr = -1;
    for (int i = 0; i < s.length() ; ++i) {
        int ind = s[i] - 'a';

        if(indexes[ind].empty())
            return false;
        

        auto res = upper_bound(indexes[ind].begin(), indexes[ind].end(), curr);

        if(res == indexes[ind].end())
            return false;

        int result_index = res - indexes[ind].begin();

        curr = indexes[ind][result_index];

    }
    return true;

}

int main() {
    //freopen("out.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
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
        if(find_it(target))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }


    return 0;
}