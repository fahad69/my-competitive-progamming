#include<bits/stdc++.h>

using namespace std;


int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out2.txt", "w", stdout);
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        int n;
        cin >> n;
        string s;
        if (n == 1)
            s = "Bir Sreshtho Captain Mohiuddin Jahangir";
        if (n == 2)
            s = "Bir Sreshtho Sepahi Hamidur Rahman";
        if (n == 3)
            s = "Bir Sreshtho Sepahi Muhammad Mustafa";
        if (n == 4)
            s = "Bir Sreshtho Engine Room Artificer Mohammad Ruhul Amin";
        if (n == 5)
            s = "Bir Sreshtho Flight Lieutenant Matiur Rahman";
        if (n == 6)
            s = "Bir Sreshtho Lance Naik Munshi Abdur Rouf";
        if (n == 7)
            s = "Bir Sreshtho Lance Naik Noor Mohammad Sheikh";
    
        cout<<s<<": Amra Tomay Vulbo Na.\n";
    }
    
    return 0;
}

