
#include <bits/stdc++.h>

using namespace std;

struct Date
{
    int d, m, y;
};

const int monthDays[12] = {31, 28, 31, 30, 31, 30,
                           31, 31, 30, 31, 30, 31};

int countLeapYears(Date d)
{
    int years = d.y;

    if (d.m <= 2)
        years--;

    return years / 4 - years / 100 + years / 400;
}

int getDifference(Date dt1, Date dt2)
{

    long int n1 = dt1.y*365 + dt1.d;

    for (int i=0; i<dt1.m - 1; i++)
        n1 += monthDays[i];

    n1 += countLeapYears(dt1);


    long int n2 = dt2.y*365 + dt2.d;
    for (int i=0; i<dt2.m - 1; i++)
        n2 += monthDays[i];
    n2 += countLeapYears(dt2);

    return (n2 - n1);
}

int give(string s)
{
    if(s=="January")
        return 1;
    if(s=="February")
        return 2;
    if(s=="March")
        return 3;
    if(s=="April")
        return 4;
    if(s=="May")
        return 5;
    if(s=="June")
        return 6;
    if(s=="July")
        return 7;
    if(s=="August")
        return 8;
    if(s=="September")
        return 9;
    if(s=="October")
        return 10;
    if(s=="November")
        return 11;
    if(s=="December")
        return 12;

}

int main() {


    Date dt1 = {31, 12, 2018};
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        string s;int day;
        cin>>s>>day;
        Date dt2 = {day, give(s), 2019};
        int diff = getDifference(dt1, dt2);

        diff = diff%67;
        //cout<<diff<<endl;
        //diff++;
        if(diff==0)
        {
            printf("S07E07\n");
            continue;
        }
        int season = diff/10 + 1;
        if(diff%10==0)
            season--;
        int ep = diff%10;
        cout<<"S0"<<season<<"E";

        if(ep==0)
            ep = 10;
        if(ep<10)
            cout<<0;
        cout<<ep<<endl;
    }

    return 0;
}