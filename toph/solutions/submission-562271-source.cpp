
#include <bits/stdc++.h>

using namespace std;


int main() {

    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        if (s.size() == 1) {
            cout << s << endl;
            continue;
        }

        string ans = "";
        for (int j = 0; j < s.size()-1; ++j) {


        if (tolower(s[j]) == tolower(s[j + 1])) {
            ans += s[j];
            while (tolower(s[j]) == tolower(s[j + 1])) {
                ans += "#";
                j++;
                if (j == s.size() - 1)
                    break;
            }
        }
        else
            ans += s[j];

        }

        if(ans.length()!=s.length())
            ans += s[s.length()-1];

            cout <<ans<< endl;
        }


        return 0;
    }