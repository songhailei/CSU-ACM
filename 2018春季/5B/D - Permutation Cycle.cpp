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

const int MAXN = 1e6+10;
int P[MAXN];

int main(){
	int N,A,B;
	int m,n;
	scanf("%d %d %d",&N,&A,&B);
	int flag = 0;
	for(int i=0;i<N/A+1;i++){
		int shen = N-A*i;
		if(shen%B==0){
			m = i;
			n = shen/B;
			flag = 1;
			break;
		}
	}
	if(flag == 0)	printf("-1\n");
	
	else{
		for(int i=0;i<m;i++){
			int chu = A*i+1;
			for(int j=1;j<A;j++){
				chu++;
				printf("%d ",chu);
			}
			printf("%d ",A*i+1);
		}
		
		for(int i=0;i<n;i++){
			int chu = B*i+1+A*m;
			for(int j=1;j<B;j++){
				chu++;
				printf("%d ",chu);
			}
			printf("%d ",B*i+1+A*m);
		}
		
	}
	return 0;
}


