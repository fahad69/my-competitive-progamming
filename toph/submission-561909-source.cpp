#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(nullptr);
    int t, c = 0;
    cin>>t;

    for (int i = 1; i <= t; ++i) {
        int x;
        cin>>x;
        int max_rating = -1;
        string winner;
        for (int j = 0; j < x; ++j) {
            string s;
            int rating;
            cin>>s;
            cin>>rating;
            if(rating>max_rating)
            {
                max_rating = rating;
                winner = s;
            }
            if(rating==max_rating)
            {
                if(s<winner)
                    winner = s;

            }

        }

        cout<<"Case "<<i<<": ";
        cout<<winner<<" is ";

        if(max_rating>=1600 && max_rating<=1899)
            cout<<"Expert!.\n";
        else if(max_rating>=1400 && max_rating<=1599)
            cout<<"Specialist!.\n";
        else if(max_rating>=1200 && max_rating<=1399)
            cout<<"Pupil!.\n";
        else if(max_rating>=1 && max_rating<=1199)
            cout<<"Newbie!.\n";
    }



}