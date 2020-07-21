#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; ++i) {
        int n;
        scanf("%d", &n);
        int a[n], mx = -1, smax = -1;
        for (int j = 0; j < n; ++j) {
            int x;
            scanf("%d", &x);

            if(j==0)
                mx = x;
            else {

                if (x > mx) {
                    smax = mx;
                    mx = x;
                } else if (x > smax) {
                    //cout << "YES" << x << endl;
                    smax = x;
                }
            }

            if(j==0)
                a[j] = -1;
            else
                a[j] = smax;
        }



        int q;
        scanf("%d", &q);
        for (int k = 0; k < q; ++k) {
            int pp;
            scanf("%d", &pp);
            printf("%d\n", a[pp-1]);
        }


    }



    return 0;
}