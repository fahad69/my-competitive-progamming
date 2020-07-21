#include <bits/stdc++.h>

using namespace std;



int main() {
    //freopen("out.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;

    for (int i = 1; i <= t; ++i) {
        int x;
        cin>>x;
        int montu = 0, jhontu = 0, draw = 0;
        for (int j = 1; j <= x ; ++j) {
            long long a, b;

            cin>>a>>b;

            while(1)
            {
                if(a==b)
                {
                    draw++;
                    break;
                }

                if(a==1)
                {
                    montu++;
                    break;
                }

                if(b==1)
                {
                    jhontu++;
                    break;
                }

                if(a%2==0)
                    a = a/2;
                else
                    a = 3*a + 1;

                if(b%2==0)
                    b = b/2;
                else
                    b = b*3 + 1;

            }

        }

        printf("Game No %d: Montu %d, Jhontu %d, Draw %d\n", i, montu, jhontu, draw);

    }


    return 0;
}