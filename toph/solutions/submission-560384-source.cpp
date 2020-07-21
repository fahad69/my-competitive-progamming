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


int main() {

    int l;
    string s;
    cin>>l;
    cin>>s;
    do_calculation(s);

    int q;
    cin>>q;

    for (int j = 0; j < q; ++j) {
        string target;
        cin>>target;

        int curr = -1, i;

        for (i = 0; i < target.length() ; ++i) {
            int ind = target[i] - 'a';

            auto it = upper_bound(indexes[ind].begin(), indexes[ind].end(), curr);
            if(it == indexes[ind].end())
                break;
            curr = *(it);
        }

        if(i == target.length())
            cout<<"YES\n";
        else
            cout<<"NO\n";

    }


    return 0;
}