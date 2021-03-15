
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
  cin>>n;
  string str;
  cin>>str;
  vector<int> v(n);
  fo(i,n){
  	v[i] = str[i] - '0';
  }
  int done =0;
  vector<int> ans1,ans2;
  ans1.push_back(1);
  ans2.push_back(1);
  for(int i=1;i<n;i++){
  	if(v[i]==0){
  		ans1.push_back(0);
  		ans2.push_back(0);
  	}
  	else if(v[i]==1){
  		if (done)
  		{
  			ans1.push_back(0);
  			ans2.push_back(1);
  		}
  		else{
  			ans1.push_back(1);
  			ans2.push_back(0);
  			done=1;
  		}
  	}
  	else{
  		if(done){
  			ans1.push_back(0);
  			ans2.push_back(2);
  		}
  		else{
  			ans1.push_back(1);
  			ans2.push_back(1);
  		}
  	}
  }
  for(int i:ans1){
  	cout<<i;
  }
  cout<<'\n';
  for(int i:ans2){
  	cout<<i;
  }
  cout<<'\n';
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
