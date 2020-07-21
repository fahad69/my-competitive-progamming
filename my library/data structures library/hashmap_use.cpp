#include<bits/stdc++.h>
using namespace std;



int main()
{
    //freopen("in.txt", "r", stdin);
    int n, t;
    cin >> t;
    string s;
    unordered_map<string, int> hashmap;

    for (int i = 0; i < t; i++) {
        cin >> s;
        auto check = hashmap.find(s);
        if (hashmap.end() == check) {
            hashmap[s] = 0;
            cout << "OK" << endl;
        } else {
            int p = check->second++;
            cout << s << p+1 << endl;
        }
    }
}