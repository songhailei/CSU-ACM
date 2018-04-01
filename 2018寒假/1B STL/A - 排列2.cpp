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
int a[5]={0};
int end1 =0;
int main(void){
	while(scanf("%d %d %d %d",&a[0],&a[1],&a[2],&a[3])){
        if(a[0]==0 && a[1]==0 && a[2]==0 && a[3]==0) break;
        if(end1!=0)	printf("\n");
        int flag=1,zero;
        do{
			if(a[0]==0)continue;
			if(flag){
				printf("%d%d%d%d",a[0],a[1],a[2],a[3]);
                flag=0;
			}else if(zero ==a[0]){
				printf(" %d%d%d%d",a[0],a[1],a[2],a[3]);
			}else printf("\n%d%d%d%d",a[0],a[1],a[2],a[3]);
			zero =a[0];
		}while(next_permutation(a,a+4));
		printf("\n");
		end1 =1;
	}
	return 0;

}
