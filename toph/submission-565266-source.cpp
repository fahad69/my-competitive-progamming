#include <bits/stdc++.h>
using namespace std;
vector<int> box;

void init()
{
    box.push_back(0);
    box.push_back(1);
    for (int i = 2;  ; ++i) {
        int res;
        if(i%2==0)
            res = box[i/2]*box[i/2] + 1;
        else
            res = box[(i-1)/2]*box[(i+1)/2] + 2;
        if(res>1000000000)
            break;
        box.push_back(res);
    }
}

int main()
{
    init();

    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int n;
        cin>>n;

        for (int j = 1; j < box.size(); ++j) {
            if(n==box[j])
            {
                cout<<"Case "<<i+1<<": "<<j<<endl;
                break;
            }
        }

    }


    return 0;
}