#include <bits/stdc++.h>

using namespace std;


int main() {


    int n;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        double l, w, d;
        cin>>l>>w>>d;
        cout<<"Case "<<i+1<<": ";
        cout<<setprecision(2)<<fixed<< ((w-d)/2.0)*l<<endl;
    }



    return 0;
}