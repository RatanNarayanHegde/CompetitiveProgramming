
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

bool flipable(char a1,char a2,char b1,char b2){
	if(a1!=a2 && a1==b2 && a2==b1) return true;
	else return false;
}

void solve() {
  int i, j, n, m;
  cin>>n;
  string a,b;
  cin>>a;
  cin>>b;
  int counter=0;
  for(int i=0;i<n-1;i++){
  	if(flipable(a[i],a[i+1],b[i],b[i+1])){
  		swap(a[i],a[i+1]);
  		counter++;
  	}
  }
  for(int i=0;i<n;i++){
  	if(a[i]!=b[i]) counter++;
  }
  cout<<counter;
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
