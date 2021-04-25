
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
  vi v(n);
  fo(i,n) cin>>v[i];
  int ans;
  vi v1(v);
  int flag=0;
  for(int i=1;i<n;i++){
  	if(v[i]<v[i-1]){
  		flag=1;
  		break;
  	}
  }
  if(!flag) {
  	cout<<0<<endl;
  	return;
  }
  for(int i=0;i<=35;i++){
  	int ok=1;
  	fo(j,n){
  		v1[j] = v[j];
  	}
  	for(int j=1;j<n;j++){
  		if(v1[j]>=v1[j-1]){
  			continue;
  		}
  		for(int x=0;x<=i;x++){
  			v1[j]+= pow(2,x);
  		}
  		for(int x=i;x>=0;x--){
  			if(v1[j]-pow(2,x)>=v1[j-1]){
  				v1[j]-= pow(2,x);
  			}
  		}
  		if(v1[j]<v1[j-1]){
  			ok=0;
  			break;
  		}
  	}
  	if(ok){
  		ans =i+1;
  		break;
  	}
  }	
  cout<<ans<<endl;	
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
