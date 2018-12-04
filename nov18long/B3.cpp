#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int _=b,i=a;i<_;++i)
#define ROF(i,b,a) for(int _=a,i=b;i>_;--i)
#define REP(n) for(int _=(n);_--;)
#define _1 first
#define _2 second
#define PB push_back
#define SZ(x) int((x).size())
#define ALL(x) begin(x),end(x)
#define MSET(m,v) memset(m,v,sizeof(m))
#define MAX_PQ(T) priority_queue<T>
#define MIN_PQ(T) priority_queue<T,vector<T>,greater<T>>
#define IO {ios_base::sync_with_stdio(0);cin.tie(0);}
#define nl '\n'
#define cint1(a) int a;cin>>a
#define cints(a) string a;cin>>a
#define cint2(a,b) int a,b;cin>>a>>b
#define cint3(a,b,c) int a,b,c;cin>>a>>b>>c

int main()
{
	cint1(T);
	while(T--)
	{
		cint1(n);
		int k=0;
		std::vector<int> v(n+1,0);
		for(int i=1;i<=n;i++)
		{
			cin>>v[i];
		}
		set<int>s;
		for(int i=1;i<=n;i++)
		{
			if(s.count(v[v[i]]))
			{
				k=1;
			}
			else
			{
				s.insert(v[v[i]]);
			}
		}
		if(k==1)
		{
			cout<<"Truly Happy\n";
		}
		else
		{
			cout<<"Poor Chef\n";
		}
	}
	return 0;
}