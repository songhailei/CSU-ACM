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

const int MAXN = 2e2+10;
ll S[5][MAXN];
ll a[MAXN*MAXN],b[MAXN*MAXN];

int solve(ll x,int n){
	 int head=0,tail=n*n-1;  
    while(true){  
    	if(a[head]+b[tail]==x) return 1;  
        if(a[head]+b[tail] > x){  
            tail--;  
            if(tail ==-1){  
                break;  
            }  
        }else{  
            head++;  
            if (head == n*n){  
                break;  
            }  
        }      
    }  
    return 0;  
}

int main(){
	int T,n; 
	scanf("%d",&T);
	for(int t=0;t<T;t++){
		int flag = 0;
		scanf("%d",&n);
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		for(int i=0;i<5;i++){
			for(int j=0;j<n;j++){
				scanf("%lld",&S[i][j]);
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				a[i*n+j] = S[0][i]+S[1][j];
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				b[i*n+j] = S[2][i]+S[3][j];
			}
		}
		sort(a,a+n*n);
		sort(b,b+n*n);
		for(int i=0;i<n;i++){
			flag = solve(-S[4][i],n);
			if(flag == 1)	break;
		}
		if(flag)	printf("Yes\n");
		else	printf("No\n");
	}
	

	
	return 0;
}


