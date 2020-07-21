#include<bits/stdc++.h>

using namespace std;

int main() {

    long long x, y, a, b;

    cin>>x>>y;

    a = x>y?x:y;
    b = x<y?x:y;

    long long diff1 = 5*b - 3*a;

    if(a<5 || b<3 || a == b)
        printf("Not possible");
    else if(a%5==b%3 && a/5==b/3)
        printf("%lld %lld", a, b);
    else if(diff1>0 && diff1%2==0)
    {
        diff1 = diff1/2;
        cout<<a-diff1<<" "<<b-diff1<<endl;
    }
    else
        printf("Not possible");










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