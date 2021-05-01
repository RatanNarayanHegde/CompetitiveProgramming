
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


void solve() {
  int i, j, n, m;
  int a,b;
  cin>>a>>b;
  string str;
  cin>>str;
  // deb2(a,b);
  n = str.size();
  int dp[n][2];
  if(str[0]=='0'){
  	dp[0][0]=0;
  	dp[0][1]= a+b;
  }
  else{
  	dp[0][0]=a;
  	dp[0][1]=a;
  }
  for(int i=1;i<n;i++){
  	if(str[i]=='0'){
  		dp[i][0]= dp[i-1][0];
  		dp[i][1] = dp[i-1][1]+b;
  	}
  	else{
  		int mn = min(dp[i-1][1],dp[i-1][0]+a);
  		dp[i][0]=mn;
  		dp[i][1]=mn;
  	}
  }
  cout<<dp[n-1][0]<<endl;

}

int32_t main()
{
  FIO;
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  w(t)
  solve();
  return 0;
}
