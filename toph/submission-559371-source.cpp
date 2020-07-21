#include<bits/stdc++.h>

using namespace std;

int main() {

    string s;
    cin>>s;
    int c = 0;
    for (int i = 0; i < s.length() ; ++i) {
        if(s[i]=='a' || s[i] == 'A' || s[i]=='e' || s[i] == 'E' ||s[i]=='i' || s[i] == 'I' ||s[i]=='o' || s[i] == 'O'||s[i]=='u' || s[i] == 'U' )
            c++;
    }

    cout<<c;









    return 0;
}



/*int t;
    cin>>t;
    for (int i = 1; i <=t ; ++i) {
        int n;
        cin>>n;
        double sum = 0;
        for (int j = 0; j < n; ++j) {
            double x;
            cin>>x;
            sum+=x;
        }
        printf("Case %d: %.3lf\n", i, (double)sum/n);
    }*/