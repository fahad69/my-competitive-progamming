#include <bits/stdc++.h>

using namespace std;



int main()
{

    double p;
    cin>>p;
    int a = floor(p);

    int b = a/10;
    printf("[");
    for (int i = 1; i <=b ; ++i) {
        cout<<"+";
    }
    for (int j = 1; j <=10-b ; ++j) {
        cout<<".";
    }
    cout<<"] ";
    cout<<a<<"%";



    return 0;
}