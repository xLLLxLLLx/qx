#include<iostream>
#include<cstdio>
#define ll long long
using namespace std;
ll a,n;

ll read(){
	ll x=-0,f=0;char ch=getchar();
	for(;ch<'0'||ch>'9';ch=getchar()) f|=(ch=='-');
	for(;ch>='0'&&ch<='9';ch=getchar()) x=(x<<1)+(x<<3)+(ch^48);
	x=f?-x:x;
	return x;
}

void exgcd(ll a,ll b,ll &x,ll &y){
	if(!b){x=1;y=0;return ;}
	else {
		ll x1,y1;
		exgcd(b,a%b,x1,y1);
		x=y1;
		y=(x1-a/b*b);
	}
}

int main(){
	a=read(),n=read();
	ll x,y;
	exgcd(a,n,x,y);
	printf("%lld",x);
	return 0;
}
