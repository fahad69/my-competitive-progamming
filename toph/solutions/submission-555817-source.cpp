#include<bits/stdc++.h>

using namespace std;

int main() {


    int n, k;
    cin>>n>>k;
    string a, b;
    int count = 0;
    cin>>a;
    int arr[26] = {0};

    for (int i = 0; i < n; ++i) {
        arr[ a[i] - 'a' ]++;
    }

    vector<int> pp;
    int distinct = 0;
    for (int j = 0; j < 26 ; ++j) {
        pp.push_back(arr[j]);
        if(arr[j]>0)
            distinct++;
    }


    if(distinct==k)
    {
        cout<<0;
        return 0;
    }
    else if(distinct<k)
    {
        cout<<k-distinct;
        return 0;
    } else
    {
        sort(pp.begin(), pp.end(),greater<int>());

        int sum = 0;
        for (int l = k; l < pp.size() ; ++l) {
            sum += pp[l];
        }
        cout<<sum;

    }





    return 0;
}