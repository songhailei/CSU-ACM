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

const int MAXN = 26;
int sav[MAXN]={0};

string zifu;

int main(){
	for(int i=1;i<=10;i++){
		sav[i] = 5;
	}
	for(int i=11;i<=15;i++){
		sav[i] = 4;
	}
	for(int i=16;i<=20;i++){
		sav[i] = 3;
	}
	for(int i=21;i<=25;i++){
		sav[i] = 2;
	}

	
//	for(int i=1;i<=25;i++){
//		printf("%d ",sav[i]);
//	}
	while(cin>>zifu){	
		int rank = 25,stars = 0,cw=0;
		int len = zifu.length();
		for(int i=0;i<len&&rank>0;i++){
		 if (zifu[i] == 'W') {  
                stars++;  
                if (rank > 5 && ++cw >= 3) stars++;  
                if (stars > sav[rank]) {  
                    stars -= sav[rank];  
                    rank--;  
                }  
            } 
			else {  
                cw = 0;  
                if (rank <= 20) {  
                    stars--;  
                    if (stars < 0) {  
                        if (rank == 20) {  
                            stars = 0;  
                        } else {  
                            rank++;  
                            stars = sav[rank] - 1;  
                        }  
                    }  
                }  
            }  
   	 	}
   	 	if(rank!=0)	printf("%d\n",rank);
   	 	else	printf("Legend\n");
	}
	return 0;
}


