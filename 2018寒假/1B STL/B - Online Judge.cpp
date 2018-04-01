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
vector<string>v1, v2;
int main()
{
    string s, str1, str2; 
	int test; 
	scanf("%d",&test);
	for(int t =0;t<test;t++)
    {
        while (getline(cin, s)){
            if (s == "START") continue;
            else if (s == "END") break;
            v1.push_back(s); 
            for (int i = 0; i < s.length(); i++)
                if (s[i] != ' ' && s[i] != '\t')
                    str1 += s[i];
        }

        while (getline(cin, s)){
            if (s == "START") continue;
            else if (s == "END"){
                if (v1 == v2) printf("Accepted\n");
                else if (str1 == str2) printf("Presentation Error\n");
                else printf("Wrong Answer\n");
                break;
            }
            v2.push_back(s);
            for (int i = 0; i < s.length(); i++)
                if (s[i] != ' ' && s[i] != '\t')
                    str2 += s[i];
        }
        v1.clear(); v2.clear(); 
		str1.resize(0); str2.resize(0);
    }
}
