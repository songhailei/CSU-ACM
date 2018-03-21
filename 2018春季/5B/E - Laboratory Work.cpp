#include<cstdio>
#include<cstring>
#include<algorithm>
#include<iostream>
#include<string>
#include<vector>
#include<stack>
#include<bitset>
#include<cstdlib>
#include<cmath>
#include<set>
#include<list>
#include<deque>
#include<map>
#include<queue>
using namespace std;
typedef long long ll;
const double PI = acos(-1.0);
const double eps = 1e-6;
const int INF = 0x3f3f3f3f;

const int MAXN = 1e5+10;
int x[MAXN],y[MAXN];

int main(){
	int N = 0;
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		scanf("%d",&x[i]);
	}
	int sum = 0;
	int mmin=x[0],mmax=x[0];
	int cntin = 0;
	int cntax = 0;
	for(int i=0;i<N;i++){
		sum+=x[i];
		if(mmin == x[i])	cntin++;
		if(mmax == x[i])	cntax++;
		if(mmin>x[i]){
			mmin = x[i];
			cntin=1;
		}
		if(mmax<x[i]){
			mmax = x[i];
			cntax = 1;
		}
	}
	int che = (N-cntin-cntax)/2;
	int cha = min(cntin,cntax);
	int flag = che>cha?1:0;
	if(mmax-mmin<2){
		printf("%d\n",N);
		for(int i=0;i<N;i++){
			printf("%d ",x[i]);
		}
		printf("\n");
	}else if(flag==0){
		printf("%d\n",N-2*cha);
		int smin=cha,smax=cha;
		for(int i=0;i<N;i++){
			if(x[i]==mmin&&smin){
				x[i]++;
				smin--;
			}
			if(x[i]==mmax&&smax){
				x[i]--;
				smax--;
			}
		}
		for(int i=0;i<N;i++){
			printf("%d ",x[i]);
		}
		printf("\n");
	}else{
		printf("%d\n",N-2*che);
		int msea = (mmin+mmax)/2;
		int ind = 2*che;
		for(int i=0;i<N;i++){
			if(x[i]==msea&&ind){
				if(ind%2==0)	x[i]++;
				else	x[i]--;
				ind--;
			}
		}
		for(int i=0;i<N;i++){
			printf("%d ",x[i]);
		}
		printf("\n");
	}
	return 0;
}


