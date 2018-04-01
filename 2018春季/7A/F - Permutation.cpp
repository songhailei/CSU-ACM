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
int ans[MAXN];

int main(){
	int T =0,n=0;
	scanf("%d",&T);
	for(int t=0;t<T;t++){
		scanf("%d",&n);
		int st = 1;int en =n;
		for(int i=1;i<=n;i+=2){
			ans[i] = st++;
		}
		for(int i=2;i<=n;i+=2){
			ans[i] = en--;
		}
		
		for(int i=1;i<=n;i++){
			printf("%d ",ans[i]);
		}
		printf("\n");
	}
	
	return 0;
}


