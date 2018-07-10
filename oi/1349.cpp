#include<iostream>
#include<cstdio>
#define LL long long
using namespace std;
const int N = 10010;
struct data{
	string lx;
	LL num,p;
}a[N];

int main(){
	LL n,k; scanf("%lld%lld",&n,&k);
	for(LL i=1;i<=n;++i){cin>>a[i].lx;scanf("%lld",&a[i].num);a[i].p=-1;}
	for(LL i=1;i<=k;++i){
		string ll;LL x;
		cin>>ll>>x;
		for(int i=1;i<=n;++i)
			if(a[i].lx==ll){a[i].p=x;break;}
	}
	LL sum=0;
	for(int i=1;i<=n;++i)
		if(a[i].p==-1) {printf("Unknow");return 0;}
		else sum+=a[i].p*a[i].num;
	printf("%lld",sum);
	return 0;
}
