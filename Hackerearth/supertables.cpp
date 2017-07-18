#include<bits/stdc++.h>
    using namespace std;
    int main()
    {
    	long long t,a,b,n;
    	cin >> t;
    	while ( t-- ) {
    		cin >> a >> b >> n;
    		long long p = __gcd(a,b);
    		//cout<<p<<endl;
    		p = (a*b)/p;
    		//cout<<p<<endl;
    		long long L,R,M;
    		L = 1;
    		R = 1000000000000000000;
    		long long ans;
    		while ( L <= R ) {
    			M = (L+R)/2;
    			long long val = M/a + M/b - M/p;
    			if ( val == n ) {
                    ans = max((M/a)*a, (M/b)*b);
    				cout << ans << endl;
    				break;
    			}
    			else if ( val < n ) {
    				L = M+1;
    			}
    			else {
    				R = M-1;
    			}
    		}
    	}
        return 0;
    }