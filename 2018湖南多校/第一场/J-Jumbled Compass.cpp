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

int main(){
	int a,b;
	while(~scanf("%d %d",&a,&b)){
		int z = b-a;
		if(z<0)	z+=360;
		else	z=z%360;
		if(z<360-z){
			printf("%d\n",z);
		}else{
			printf("-%d\n",360-z);
		}
	}
	 

	return 0;
}


