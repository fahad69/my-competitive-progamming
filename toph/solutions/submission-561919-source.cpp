#include <bits/stdc++.h>

using namespace std;

double give(double x)
{
    if(x>=80 && x<=100)
        return 4.00;
    else if(x>=75 && x<80)
        return 3.75;
    else if(x>=70 && x<75)
        return 3.50;
    else if(x>=65 && x<70)
        return 3.25;
    else if(x>=60 && x<65)
        return 3.00;
    else if(x>=55 && x<60)
        return 2.75;
    else if(x>=50 && x<55)
        return 2.50;
    else if(x>=45 && x<50)
        return 2.25;
    else if(x>=40 && x<45)
        return 2.00;
    else
        return 0.00;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(nullptr);


    int t;
    cin>>t;
    for (int i = 1; i <= t ; ++i) {
        int x;
        cin>>x;
        int fails = 0;
        double total_weight = 0, total = 0;
        for (int j = 0; j < x; ++j) {
            double g;
            cin>>g;
            double weight;
            cin>>weight;
            total_weight += weight;
            total += weight*give(g);
            //cout<<give(g)<<endl;
            if(give(g)<1)
                fails++;
        }

        cout<<"Case "<<i<<": ";
        if(fails==1)
            cout<<"Sorry, you have failed in 1 course!\n";
        else if(fails>1)
            cout<<"Sorry, you have failed in "<<fails<<" courses!\n";
        else
            cout<<setprecision(2)<<fixed<<total/total_weight<<endl;


    }

}