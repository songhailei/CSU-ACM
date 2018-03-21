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

const int MAXN = 2e3+10;
int a[MAXN];
int sum1[MAXN];
int sum2[MAXN];
int dp1[MAXN][MAXN];
int dp2[MAXN][MAXN];

int main(){
	int N = 0;
	scanf("%d",&N);
	memset(dp1,0,sizeof(dp1));
	memset(dp2,0,sizeof(dp2));
	for(int i=1;i<=N;i++){
		scanf("%d",&a[i]);
		sum1[i]=sum1[i-1]+(a[i]==1);
	}
	for(int i=N;i>=1;i--){
		sum2[i]=sum2[i+1]+(a[i]==2);
	}
	int ans = 0;
	for(int i=1;i<=N;i++){
		for(int j=i;j<=N;j++){
			dp2[i][j] = dp2[i][j-1]+(a[j]==2);
			dp1[i][j] = max(dp2[i][j-1],dp1[i][j-1])+(a[j]==1);
			ans = max(ans,sum1[i-1]+dp2[i][j]+sum2[j+1]);
			ans = max(ans,sum1[i-1]+dp1[i][j]+sum2[j+1]);
		}
	}
	printf("%d\n",ans);
	
	return 0;
}


