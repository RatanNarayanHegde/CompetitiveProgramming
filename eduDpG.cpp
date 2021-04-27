
#include<bits/stdc++.h>
using namespace std;

#define ff              first
#define fo(i,n)         for(i=0;i<n;i++)
#define Fo(i,k,n)       for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define deb(x)          cout << #x << "=" << x << endl
#define deb2(x, y)      cout << #x << "=" << x << "," << #y << "=" << y << endl
#define ss              second
#define int             long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define w(x)            int x; cin>>x; while(x--)
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());


const int N = 1e5+5, M = N;
//=======================
int dp[N];
int mx;

int dfs(vector<vector<int>> &g,int u){
	if(dp[u]) return dp[u];

	int curr=0;
	for(auto v:g[u]){
		if(!dp[v]){
			curr = max(curr,dfs(g,v));
		}
		else{
			curr = max(curr,dp[v]);
		}
	}
	dp[u]= curr+1;
	mx = max(dp[u],mx);
	return dp[u];
}


void solve() {
  int i, j, n, m;
  cin>>n>>m;
  vector<vector<int>> g(n);
  while(m--){
  	int f,t;
  	cin>>f>>t;
  	f--;t--;
  	g[f].push_back(t);
  }
  for(int i=0;i<n;i++){
  	if(dp[i]==0){
  		dfs(g,i);
  	}
  }
  cout<<mx-1;

}

int32_t main()
{
  FIO;
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  
  solve();
  return 0;
}
