#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s1 = "x54321\n"
                "~~~~~~\n"
                "111111\n"
                "110001\n"
                "~~~~~~";
    string s2 = "x54321\n"
                "~~~~~~\n"
                "111111\n"
                "111101\n"
                "~~~~~~\n"
                "111111\n"
                "110011\n"
                "~~~~~~";
    string s3 = "xx4321\n"
                "~~~~~~\n"
                "111111\n"
                "111110\n"
                "~~~~~~\n"
                "111111\n"
                "111101\n"
                "~~~~~~\n"
                "111111\n"
                "110011\n"
                "~~~~~~";
    string s4 = "x54321\n"
                "~~~~~~\n"
                "111111\n"
                "111101\n"
                "~~~~~~\n"
                "111111\n"
                "110111\n"
                "~~~~~~\n"
                "111111\n"
                "101111\n"
                "~~~~~~";
    string s5 = "xx4321\n"
                "~~~~~~\n"
                "111111\n"
                "111110\n"
                "~~~~~~\n"
                "111111\n"
                "111011\n"
                "~~~~~~\n"
                "111111\n"
                "111101\n"
                "~~~~~~";
    string s6 = "xx4321\n"
                "~~~~~~\n"
                "111111\n"
                "111010\n"
                "~~~~~~\n"
                "111111\n"
                "111101\n"
                "~~~~~~";
    string s7 = "654321\n"
                "~~~~~~\n"
                "111111\n"
                "111011\n"
                "~~~~~~\n"
                "111111\n"
                "100111\n"
                "~~~~~~";
    string s8 = "654321\n"
                "~~~~~~\n"
                "111111\n"
                "100111\n"
                "~~~~~~";
    string s9 = "x54321\n"
                "~~~~~~\n"
                "111111\n"
                "111101\n"
                "~~~~~~\n"
                "111111\n"
                "111011\n"
                "~~~~~~\n"
                "111111\n"
                "100111\n"
                "~~~~~~";

    string s10 = "654321\n"
                 "~~~~~~\n"
                 "111111\n"
                 "101111\n"
                 "~~~~~~\n"
                 "111111\n"
                 "011100\n"
                 "~~~~~~";

    int t;
    cin>>t;
    for (int i = 1; i <= t; ++i) {
        int n;
        cin>>n;
        string s = "", s0;
        for (int j = 0; j < n; ++j) {
            cin>>s0;
            if(j==n-1)
                s = s + s0;
            else
                s = s + s0+ "\n";
        }

        string res;
        if(s==s1)
            res = "A-major";
        if(s==s2)
            res = "A-minor";
        if(s==s3)
            res = "B-minor";
        if(s==s4)
            res = "C-major";
        if(s==s5)
            res = "D-minor";
        if(s==s6)
            res = "D-major";
        if(s==s7)
            res = "E-major";
        if(s==s8)
            res = "E-minor";
        if(s==s9)
            res = "F-major";
        if(s==s10)
            res = "G-major";

        cout<<"Case "<<i<<": "<<res<<endl;

    }

    return 0;
}