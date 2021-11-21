#include <iostream>
using namespace std;
typedef long long int ll;
int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    ll n,d,i;
	    cin >> n >> d;
	    ll a[n];
	    for( i=0;i<n;i++)
	    {
	        cin >> a[i];
	    }
	    for(i=d; i<n;i++)
	    {
	        cout << a[i] << " ";
	    }
	    for(i=0;i<d ;i++)
	    {
	        cout << a[i] << " ";
	    }
	    cout << endl;
	}
	return 0;
}
