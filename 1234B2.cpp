
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
  int k;
  cin>>n>>k;
  vector<int> nums(n);
  fo(i,n) {
  	cin>>nums[i];
  }
  int mx =0;
  int mn = n;
  for(int i=n;i>=n-(k-1);i--){
  	mx+=i;
  	mn = min(mn,i);
  }
  // deb(mn);
  std::vector<int> spaces;
  i=0;
  while(i<n && nums[i]<mn){
  	i++;
  }
  while(i<n){
  	if(nums[i]>=mn){
  		i++;
  		int count = 0;
  		while(i<n && nums[i]<mn){
  			count++;
  			i++;
  		}
  		if(i==n) break;
  		spaces.pb(count);
  	}

  }
  // for(i=0;i<n;i++){
  // 	if(nums[i]>=mn){
  // 		int count=0;
  // 		i++;
  // 		for(;i<n;i++){
  // 			if(nums[i]<mn){
  // 				count++;
  // 			}
  // 			else{
  // 				break
  // 			}
  // 		}
  // 		spaces.pb(count);
  // 	}
  // }
  int ans = 1;
  for(auto i:spaces){
  	// deb(i);
  	ans = (ans * (i+1)) % 998244353;
  }
  cout<<mx<<' '<<ans;

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
