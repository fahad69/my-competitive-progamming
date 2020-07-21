
#include <bits/stdc++.h>

using namespace std;

bool is_leap_year(int year)
{
    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
        return 1;
    else
        return 0;
}

string give_month(int a)
{
    if(a==1)
        return "Jan";
    if(a==2)
        return "Feb";
    if(a==3)
        return "Mar";
    if(a==4)
        return "Apr";
    if(a==5)
        return "May";
    if(a==6)
        return "Jun";
    if(a==7)
        return "Jul";
    if(a==8)
        return "Aug";
    if(a==9)
        return "Sep";
    if(a==10)
        return "Oct";
    if(a==11)
        return "Nov";
    if(a==12)
        return "Dec";
}

int main()
{

    int t;
    cin>>t;
    set<int> m1, m2;
    m1.insert(1);m1.insert(3);m1.insert(5);m1.insert(7);m1.insert(8);
    m1.insert(10);m1.insert(12);
    m2.insert(4);m2.insert(6);m2.insert(9);m2.insert(11);

    for (int i = 1; i <= t; ++i) {
        int day, mon, year;
        cin>>day>>mon>>year;
        if(is_leap_year(year))
        {
            if(day==28 && mon==2)
                day++;
            else if(day==29 && mon==2)
            {
                day = 1, mon++;
            } else
            {
                if(day == 31 && mon == 12)
                {
                    day = 1, mon = 1, year++;
                }
                else if(mon == 2 && day == 28)
                {day = 1; mon++;}
                else if(m1.find(mon)!=m1.end() && day == 31)
                {
                    day = 1, mon++;
                }
                else if(day==30 && m2.find(mon)!=m2.end())
                {
                    day = 1, mon++;
                }else
                day++;
            }
        }
        else {

            if (day == 31 && mon == 12) {
                day = 1, mon = 1, year++;
            } else if (mon == 2 && day == 28) {
                day = 1;
                mon++;
            }
            else if (m1.find(mon) != m1.end() && day == 31) {
                day = 1, mon++;
            } else if (day == 30 && m2.find(mon) != m2.end()) {
                day = 1, mon++;
            }else
                day++;
        }
            if(day<10)
                cout<<0;
            cout<<day<<" "<<give_month(mon)<<", "<<year<<endl;

    }

    return 0;
}