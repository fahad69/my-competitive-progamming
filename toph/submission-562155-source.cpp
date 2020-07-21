#include <bits/stdc++.h>

using namespace std;


long long gcd(long long a, long long b)
{
    if( b==0 )
        return a;
    return gcd(b, a%b);
}

long long lcm(long long a, long long b)
{
    return (a*b)/gcd(a,b);
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);


    int t;
    cin >> t;
    for (int l = 1; l <= t ; ++l) {



    int n;
    cin>>n;
    int a[n];
    int item;
    cin >> item;
    int budget;
    cin >> budget;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int c = 0;
    if (item == 1) {
        for (int i = 0; i < n; ++i) {
            if (a[i] == budget)
                c++;
        }
    } else if (item == 2) {
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                if (a[i] + a[j] == budget)
                    c++;
            }
        }
    } else if (item == 3) {
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                for (int k = j + 1; k < n; ++k) {
                    if (a[i] + a[j] + a[k] == budget)
                        c++;
                }
            }
        }
    }

    cout << "Case " << l << ": " << c << endl;
}


    return 0;
}