#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007

long long pow(long long a,long long b)
{
	long long int r=1;
	while(b>0)
	{
		if( b % 2 == 1)
		r = (r * a) % mod;
		b=b/2;
		a=(a*a) % mod;
	}
	return r;
}

int main(){
	
	long long t,n;
	long long r,s,d,val,ans;
	cin>>t;
	
	while(t--){
		cin>>n;
		
		// the answer is simple,
		// given n , ans = 2^n - (n*(n-1))/2 ;
		// but modulo 1000000007 makes it difficult
		// that's why pow function is used
		
		r = pow(2,n);
		
		s = n%mod-1;
		if(s<0) s += mod;
		
		val = (n*s)%mod;
		val /= 2;
		
		ans = r-val;
		if(ans<0) ans+=mod;
		
		cout<<ans<<endl;
	}
	return 0;
}
