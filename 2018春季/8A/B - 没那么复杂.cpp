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

const int MAXN = 1e3+10;
int a[MAXN]={0};
char b[MAXN]={0};

int main(){
	int T = 0;
	scanf("%d",&T);
	for(int t=0;t<T;t++){
		int n=0;int k = 0;
		int l=1,r=-1;
		scanf("%d%d",&n,&k);
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		for(int i=0;i<n;i++){
			scanf("%s",&b[i]);
		}
		for(int i=1;i<n;i++){
			if(b[i]=='N'){
				l-=a[i];
				r+=a[i];
			}else if(b[i]=='L'){
				r+=a[i];
			}else{
				l-=a[i];
			}
		}
		if(k>=l&&k<=r){
			printf("yes\n");
		}else{
			printf("no\n");
		}
	}

	return 0;
}


