#include<bits/stdc++.h>

using namespace std;

int cnt = 0;


int main() {

    int t;
    cin >> t;
    int minutes;
    cin>>minutes;
    int flag = 1;
    for (int i = 0; i < t ; ++i) {
        int x;
        cin>>x;
        if(x<minutes)
            flag = 0;
    }
    
    if(t*minutes==60)
    {
        if(flag==1)
            cout<<"YES";
        else
            cout<<"NO";
    }
    else
        cout<<"NO";


    return 0;
}



/*int t;
    cin>>t;
    for (int i = 1; i <=t ; ++i) {
        int n;
        cin>>n;
        double sum = 0;
        for (int j = 0; j < n; ++j) {
            double x;
            cin>>x;
            sum+=x;
        }
        printf("Case %d: %.3lf\n", i, (double)sum/n);
    }*/