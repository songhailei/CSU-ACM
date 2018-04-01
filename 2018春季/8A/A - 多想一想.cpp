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

const int MAXN = 1e7+10;
int n,a[MAXN],b[MAXN];

int main(){
	while(~scanf("%d",&n)){
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
			a[i+n]=a[i]; 
		}
		for(int i=0;i<n;i++){
			scanf("%d",&b[i]);
			b[i+n]=b[i];
		}
		int sumcur = 0,maxn=0;
		int nexta = 0,pin =0;
		for(int i=0;i<2*n;i++){
			sumcur+=a[i];
			sumcur-=b[i];
			
			if(sumcur>maxn){
				maxn = sumcur;
				pin = nexta;
			}
			if(sumcur<0){
				sumcur = 0;
				nexta = i+1;
				if(nexta>n)	break;
			}
			
		}
		printf("%d\n",pin);
	}

	return 0;
}


