#include<bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out2.txt", "w", stdout);
    int T;
    cin >> T;
    int R;
    cin >> R;
    R = R % T;
    vector<int> pp;
    int ans1 = -1, ans2 = -1;
    for (int i = 1; i <= T; ++i)
    {
        int x;
        cin >> x;
        pp.push_back(x);
        int tmp = i - R;
        if (tmp <= 0)
            tmp += T;
        if (tmp == 1)
            ans1 = i;
        if (tmp == T)
            ans2 = i;
    }
    
    if(R==0)
        cout<<pp[0]<<" "<<pp[T-1];
    else
        cout << pp[ans1-1] << " " << pp[ans2-1];
    
    
    return 0;
}

