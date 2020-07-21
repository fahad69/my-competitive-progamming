
#include <bits/stdc++.h>

using namespace std;

int main() {


    string s, s1;

    for (int i = 0; i < 5; ++i) {
        getline(cin, s);
        istringstream ss(s);

        while(ss>>s1)
        {
            cout<<s1<<endl;
        }
    }




    return 0;
}