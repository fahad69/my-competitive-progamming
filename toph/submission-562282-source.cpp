
#include <bits/stdc++.h>

using namespace std;


int main() {

    int h,m;
    char ch;
    cin>>h>>ch>>m;
    int req;
    cin>>req;
    int last = 11*60+45;

    req = req + 30 + h*60+m;
    if(req<=last)
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}