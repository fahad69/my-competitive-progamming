#include<bits/stdc++.h>

using namespace std;

int fibonacci[100001];
void fib(int n)
{
    int f1 = 0, f2 = 1, f_new = 0;
    fibonacci[0] = 1, fibonacci[1] = 1;
    while(true)
    {
        f_new = f2 + f1;
        if(f_new>n)
            break;
        fibonacci[f_new] = 1;
        f1 = f2;
        f2 = f_new;

    }
}


int main() {

    fib(100000);

    int t;
    cin >> t;
    for (int i = 1; i <= t ; ++i) {
        string s;
        cin>>s;
        int barca = 0, real = 0;
        for (int j = 0; j <s.length() ; ++j) {
            if(fibonacci[j]==0)
            {
                if(s[j]=='B')
                    barca++;
                else if(s[j]=='M')
                    real++;
            }
        }

       // cout<<barca<<" "<<real<<endl;
        if(barca == real)
            printf("Case #%d: Meh :\\\n", i);
        else if(barca>real)
            printf("Case #%d: Aaj Kemon Bodh Korcho\n", i);
        else
            printf("Case #%d: Hala Madrid\n", i);

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