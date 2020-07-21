#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for (int i = 1; i <= n ; i++) {
        string a;
        cin >> a;
        int arr[400] = {0};

        for (int j = 0; j < a.length() ; j++) {
                arr[a[j]]++;
        }

        printf("Case #%d:\n", i);

        for (int k = 0; k < a.length() ; k++) {
                int ind = a[k];
                if(arr[ind]>0)
                    printf("%c %d\n", a[k], arr[ind]);
                arr[ind] = 0;
        }
    }



    return 0;
}