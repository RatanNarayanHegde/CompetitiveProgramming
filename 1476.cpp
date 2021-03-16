
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

int search(double num,double  sum, double k){
	int l = 0,r = 1e15;
	while(r>l+1){
		int m = (l+r)/2;
		// deb(m);
		if(num/(double)(sum+m)>0.01*k){
			l = m;
		}
		else{
			r=m;
		}
	}
	return r;
}

void solve() {
  int i, j, n, m;
  double k;
  cin>>n>>k;
  vector<double> price(n);
  for(int i=0;i<n;i++){
  	cin>>price[i];
  }
  double sum=price[0];
  int add = 0;
  for(int i=1;i<n;i++){
  	if( price[i]/sum > 0.01*k){
  		int temp = search(price[i],sum,k);
  		sum+=temp;
  		add+=temp;
  	}
  	sum+= price[i];
  }
  cout<<add<<'\n';
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
