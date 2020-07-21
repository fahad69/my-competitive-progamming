#include<bits/stdc++.h>
using namespace std; 

int main ()
{
int n; 
cin>>n;
for (int i = 0; i<n; i++)
{
string s; 
cin>>s; 
int p = s[s.size()-1] - '0';
cout<<(p*p)%10<<endl;

}
return 0;
}