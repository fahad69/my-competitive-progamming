#include<bits/stdc++.h>

using namespace std;

int main() {


    string a, b;
    getline(cin, a);

    for (int i = 0; i < a.size() ; ++i) {
        if(a[i]!=' ')
            cout<<a[i];
    }
    //cout<<a;
    return 0;
}