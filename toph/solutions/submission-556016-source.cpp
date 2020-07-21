#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    string a, b;
    cin>>a>>b;
    string smol, big;
    if(a.size()>b.size())
    {
        smol = b;
        big = a;
    } else{
        smol = a;
        big = b;
    }
	
	//cout<<smol<<" "<<big;

	int p = 0;
    for (int i = smol.size() - 1; i >=0  ; i--) {
        string pp = "";
		//cout<<smol[i]<<endl;
		//cout<<big[i]<<endl;
        pp = smol[i];
		
        int x = stoi(pp);
        pp = big[big.size()-1-p];
		p++;
        //cout<<pp<<endl;
		int y = stoi(pp);
		//cout<<x<<" "<<y<<endl;
        if(x+y>9)
        {
            cout<<"Yes";
            return 0;
        }
    }

    cout<<"No";

    return 0;
}