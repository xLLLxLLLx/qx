#include<iostream>
#include<cstdio>
#define ll long long 
using namespace std;
const int N = 35;
ll f[N][N],n=4,k=1;
ll ans=1;

void zuhe(){
	for(ll i=0;i<=n;++i) f[0][i]=1,f[i][i]=1,f[1][i]=i;
	for(ll i=1;i<=n;++i)
	 for(ll j=1;j<=i;++j)
	 	f[j][i]=f[j-1][i-1]+f[j][i-1];
	/*for(ll i=1;i<=n;++i)
	 for(ll j=1;j<=i;++j)
	 	cout<<j<<" "<<i<<" "<<f[j][i]<<endl;*/
}

int main(){
	scanf("%lld%lld",&n,&k);
	for(ll i=n;i>=n-k+1;--i) ans*=i;
	zuhe();
	ans*=f[k][n]; 
	printf("%lld",ans);
	return 0;
}
