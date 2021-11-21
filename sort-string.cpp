#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void sorting(string str)
{
    sort(str.begin(),str.end());
    cout << str;
   
}
int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    string s;
	   
	    cin >> s;
	    
	    sorting(s);
	    cout << endl;
	}

	return 0;
}
