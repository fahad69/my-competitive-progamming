#include <bits/stdc++.h>

using namespace std;

long long arr[1000003];

int main() {
    //freopen("out.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    long long product = 1, product2 = 1;
    int zeros = 0, negs = 0;
    for (int i = 0; i < t; ++i) {
        long long x;
        cin >> x;
        if (x != 0) {
            product2 = product2 * x;
        }
        if(x<0)
            negs++;
        product = product * x;
        arr[i] = x;
        if (x == 0)
            zeros++;
    }

    //cout<<negs;
    if (zeros == 1) {
        for (int j = 0; j < t; ++j) {
            if (arr[j] != 0) {
                cout << 0;
            } else
                cout << product2;

            if (j != t - 1)
                cout << " ";
        }
    } else if (zeros > 1) {
        for (int j = 0; j < t; ++j) {
            cout << 0;
            if (j != t - 1)
                cout << " ";
        }
    } else {

        for (int j = 0; j < t; ++j) {
            //cout<<product<<endl;


                    cout << product / arr[j];


            if (j != t - 1)
                cout << " ";
        }

    }
    return 0;
}