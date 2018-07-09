#include<iostream>
#include<cstdio>
using namespace std;
const int N = 30;
const int M = 15;
int ans=0,n;
int dis[M],w[N],h[N];

void dfs(int x){
	if(x==(n+1)) ans++;
	else {
		for(int i=1;i<=n;++i){
			if(!dis[i]&&!w[i+x]&&!h[i-x+n]){
				dis[i]=1;w[i+x]=1;h[i-x+n]=1;
				dfs(x+1);
				dis[i]=0;w[i+x]=0;h[i-x+n]=0;
			}
		}
	}
}

int main(){
	scanf("%d",&n);
	dfs(1);
	printf("%d",ans);
	return 0;
}
