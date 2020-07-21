#include <bits/stdc++.h>

using namespace std;


int main()
{

    string s;
    int flag = 0;
    cin>>s;
    stack<char> box;
    for (int i = 0; i < s.length() ; ++i) {
        while(( box.empty()!=1) &&((box.top()=='(' && s[i] == ')') || (box.top()=='{' && s[i] == '}') || (box.top()=='[' && s[i] == ']') ))
        {
            box.pop();
            i++;
            if(i==s.length())
                goto xx;
        }
        box.push(s[i]);
        //cout<<box.top()<<endl;
    }

xx:
    if(box.empty())
        cout<<"Yes";
    else
        cout<<"No";
}