#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;
const int N = 500010;
double w[N],v[N];
double ans,sumw,sumv;
int n,k;
struct data{
	double s;
	int rank;
}y[N];

bool comp(data xx,data yy){return xx.s>yy.s;}

void find(){
	for(int i=1;i<=n;++i)
		y[i].s=v[i]-ans*w[i];
	sort(y+1,y+1+n,comp);
	double x,sumw=0,sumv=0;
	for(int i=1;i<=k;++i) x+=y[i].s,sumw+=w[y[i].rank],sumv+=v[y[i].rank];
	if(abs(x)<1e-6) return ;
	else ans=sumv/sumw,find();
}

int main(){
	scanf("%d%d",&n,&k);
	int cnt;
	for(int i=1;i<=n;++i){
		if(cnt>k) scanf("%lf",&w[i]);
		else{scanf("%lf",&w[i]);sumw+=w[i];cnt++;}
	}
	cnt=0;
	for(int i=1;i<=n;++i){
		if(cnt>k) scanf("%lf",&v[i]);
		else{scanf("%lf",&v[i]);sumv+=v[i];cnt++;}
	}
	ans=sumv/sumw;
	for(int i=1;i<=n;++i) y[i].rank=i;
	find();
	printf("%.2lf",ans);
	return 0;
}
