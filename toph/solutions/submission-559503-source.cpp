#include<bits/stdc++.h>

using namespace std;



int main() {

    int n;
    cin>>n;
    for (int i = 0; i < n ; ++i) {
        double a, b, c;
        cin>>a>>b>>c;
        if(a+b<c || a+c<b || b+c<a)
            cout<<"Oh, No!\n";
        else
        {
            double s = (a+b+c)/2.0;
            printf("%0.2lf\n", sqrt(s*(s-a)*(s-b)*(s-c)));

        }
         
    }
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