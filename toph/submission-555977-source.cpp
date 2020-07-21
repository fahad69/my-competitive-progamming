#include <bits/stdc++.h>

using namespace std;



int main()
{
    //freopen("in.txt", "r", stdin);
    int n, m;
    cin>>n;

    for (int i = 0; i < n ; ++i) {
        int c = 0;
        string s;
        cin>>s;
        for (int j = 0; j < s.length() ; ++j) {
            if(s[j] != 'W' && s[j] != 'N' && s[j] != 'D')
                c++;
        }

        if(c/6>0 && c%6>0)
        {
            if(c/6>1)
                printf("%d OVERS ", c/6);
            else
                printf("%d OVER ", c/6);
        }
        else if(c/6>0)
        {
            if(c/6>1)
                printf("%d OVERS", c/6);
            else
                printf("%d OVER", c/6);
        }

        if(c%6>1)
            printf("%d BALLS", c%6);
        else if(c%6==1)
            printf("%d BALL", c%6);
        cout<<endl;
    }



    return 0;
}