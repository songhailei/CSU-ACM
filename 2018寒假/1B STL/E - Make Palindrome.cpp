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
const int MAXN=2e5+5;
char s[MAXN], si[MAXN];
int num[26+5];
int main()
{
	memset(num, 0, sizeof(num));
	scanf("%s", s);
	int len = strlen(s);
	for(int i = 0; i < len; i++)
	{
		num[s[i]-'a']++;
	}
	int flag=0, f=-1;
	for(int i = 0; i < 26; i++)
	{
		if(num[i]%2==1)
		{
			flag = 0;
			for(int j = 25; j > i; j--)
			{
				if(num[j]%2==1)
				{
					flag = 1;
					num[j]--;
					num[i]++;
					break;
				}
			}
			if(flag == 0) f = i;
		}
	}
	int li = 0;
	for(int i = 0; i < 26; i++)
	{
		if(num[i]==0) continue;
		for(int t = num[i]/2;t>0;t--)
		{
			si[li++] = i+'a';
		}
	}
	if(f!=-1) si[li++] = f+'a';
	for(int i = 25; i >=0; i--)
	{
		if(num[i]==0) continue;
		for(int t = num[i]/2;t>0;t--)
		{
			si[li++] = i+'a';
		}
	} 
	printf("%s\n", si);
	return 0;
} 

