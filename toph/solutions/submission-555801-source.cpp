#include<bits/stdc++.h>

using namespace std;

int main() {


    string a, b;
    int count = 0;
    getline(cin, a);

    int i = a.find("UUDDLRLRBA");
    if(i!=string::npos)
        count++;

    while(i!=string::npos)
    {
        i = a.find("UUDDLRLRBA", i+1);
        count++;
    }

    if(count!=0)
        count--;
    cout<<count;

    return 0;
}