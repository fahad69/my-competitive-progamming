
#include <bits/stdc++.h>

using namespace std;


int main() {

    //freopen("out.txt", "r", stdin);


    int t, q, current = 0;
    scanf("%d %d", &t, &q);
    int arr[t];
    for (int i = 0; i < t ; ++i) {
        scanf("%d", &arr[i]);
        if(arr[i]!=0)
            current++;
    }

    //cout<<current<<endl;
    for (int j = 0; j < q; ++j) {
        int a, b;

        scanf("%d %d", &a, &b);
        b--;
        if(a==1)
        {
            arr[b]--;
            if(arr[b]==0)
                current--;
        }
        else
        {
            if(arr[b]==0)
                current++;
            arr[b]++;
        }
        printf("%d\n", current);
    }




    return 0;
}