
#include <bits/stdc++.h>

using namespace std;

int fact(int n)
{
    if (n <= 1)
        return 1;
    return n*fact(n-1);
}

int nPr(int n, int r)
{
    return fact(n)/fact(n-r);
}

int main() {

    //freopen("out.txt", "r", stdin);


    long long t;
    cin>>t;
    for (int i = 1; i<=t ; ++i) {
        string s;
        cin>>s;
        int k;
        cin>>k;
        if(s.find("0")==string::npos)
        {
            cout<<nPr(s.length(), k)<<endl;
        } else
        {
            cout<<nPr(s.length(), k)-nPr(s.length()-1, k-1)<<endl;
        }
    }



    return 0;
}