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
const int MAXN = 3e5+10;    
struct node{  
    ll num; 
	ll weight;
	ll cnt;  
}a[MAXN];  
      
ll cmp(node x, node y){  
    return x.num > y.num;  
}  
      
bool operator < (const node &x, const node &y){  
    return x.cnt > y.cnt;  
}  
      
int main(){  
    int n, i, j;  
    while(~scanf("%d",&n)){  
        for(i=0; i<n; i++){  
            scanf("%lld %lld",&a[i].num, &a[i].weight);  
            a[i].cnt = a[i].weight + 1 - a[i].num;   
        }  
        sort(a+1, a+n, cmp);  
        priority_queue<node>q;  
        for(i=1; i<n;i++){  
            if(a[i].num > a[0].num)  q.push(a[i]);  
            else  break;  
        }  
        ll step = i, ans = i;  
        while(!q.empty()){  
            node temp = q.top();  
            q.pop();  
            a[0].num -= temp.cnt;  
            if(a[0].num < 0)  break;  
            for(j = i; j < n; j++){  
                if(a[j].num > a[0].num)  q.push(a[j]);  
                else  break;  
            }  
            step += j-i-1;  
            i=j;  
            ans = min(ans, step);  
        }  
        printf("%lld\n",ans);      
    }  
    return 0;  
}   
