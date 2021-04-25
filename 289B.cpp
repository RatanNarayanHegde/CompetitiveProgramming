
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
int d;
int findAns(std::vector<int> v,int ele){
	int res=0;
	for(auto i:v){
		res+= (abs(i-ele))/d;
	}
	return res;
}

void solve() {
  int i, j, n, m;
  cin>>n>>m>>d;
  int matrix[n][m];
  int mx=-1;
  vector<int> v;
  fo(i,n){
  	fo(j,m){
  		cin>>matrix[i][j];
  		mx = max(mx,matrix[i][j]);
  		v.push_back(matrix[i][j]);
  	}
  }
  fo(i,n){
  	fo(j,m){
  		if((mx-matrix[i][j])%d!=0){
  			cout<<-1;return;
  		}
  	}
  }
  int res=0;
  sort(v.begin(),v.end());
  n=v.size();
  if(v.size()&1){
  	cout<<findAns(v,v[n/2]);
  }
  else{
  	cout<<min(findAns(v,v[n/2-1]),findAns(v,v[n/2]));
  }

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
