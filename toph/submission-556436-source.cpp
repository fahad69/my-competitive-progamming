#include <bits/stdc++.h>

using namespace std;

int main()
{

    int a11, a12, a21, a22, b11, b12, b21, b22;
    cin>>a11>> a12>> a21>> a22>> b11>> b12>> b21>> b22;

    cout<<b11*a11+b21*a12<<" "<<b12*a11+b22*a12<<endl;
    cout<<b11*a21+b21*a22<<" "<<b12*a21+b22*a22;




    return 0;
}