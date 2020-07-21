#include <bits/stdc++.h>

using namespace std;



int main() {

    vector<long long> rights;

    rights.push_back(2);
    for (long long i = 2; i <= 2305843009213693951  ; ) {
        i = i*4 + 2;
        rights.push_back(i);

    }

    //cout<<rights.size()<<endl;

    int t;
    cin>>t;
    for (int j = 0; j < t; ++j) {
        long long l, r;
        cin>>l>>r;
        int c = 0;
        long long range = r - l + 1;
        for (int i = 0; i < rights.size(); ++i) {
            if(rights[i]>=l && rights[i]<=r )
                c++;
        }

        printf("%.10lf\n", (double)c/range );
    }

    //cout<<rights.size();



    return 0;
}
