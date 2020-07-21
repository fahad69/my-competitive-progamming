#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int,int> a, pair<int,int> b)
{
    if(a.first == b.first)
        return a.second>b.second;
    return a.first<b.first;
}



int main()
{
    //freopen("in.txt", "r", stdin);
    string s;
    cin>>s;
    int arr[10] = {0};
    for (int i = 0; i < s.length() ; ++i) {
        arr[ s[i] - '0' ]++;
    }

    vector<pair<int,int>> a;

    for (int i = 0; i < 10 ; ++i) {

        int x = arr[i];
        a.push_back(make_pair(x,i));
    }

    sort(a.begin(), a.end(), cmp);

    cout<<a[a.size()-1].second;

    for (int j = 0; j < a.size() ; ++j) {

        //cout<<a[j].first<<" "<<a[j].second<<endl;
    }


    return 0;
}