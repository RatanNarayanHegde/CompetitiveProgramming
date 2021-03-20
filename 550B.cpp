
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


const int N = 3e5, M = N;
//=======================

bool check(int i,vector<int> v,int l,int r,int x){
	int sum =0;
	int mn = INT_MAX;
	int mx = -1;
	for(int j=0;j<v.size();j++){
		int p = pow(2,j);
		if(i & p){
			sum+= v[j];
			mn = min(mn,v[j]);
			mx = max(mx,v[j]);
		}
	}
	// deb(sum);
	if(sum>=l && sum<=r && (mx-mn)>=x){
		return 1;
	}
	else return 0;
}

void solve() {
  int i, j, n, m;
  int l,r,x;
  cin>>n>>l>>r>>x;
  vector<int> v(n);
  fo(i,n){
  	cin>>v[i];
  }
  int count = 0;
  for(int i=0;i<pow(2,n);i++){
  	count += check(i,v,l,r,x);
  }
  cout<<count;
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
