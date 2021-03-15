
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
  int x1,y1,x2,y2,x3,y3,x4,y4;
  cin>>x1>>y1>>x2>>y2;
  if(x1>x2){
  	swap(x1,x2);
  	swap(y1,y2);
  }
  if(x1==x2){
  	int len = abs(y1-y2);
  	cout<<x1+len<<' '<<y1<<' ';
  	cout<<x2+len<<' '<<y2;
  }
  else if(y1==y2){
  	int len = abs(x1-x2);
  	cout<<x1<<' '<<y1+len<<' ';
  	cout<<x2<<' '<<y2+len;
  }
  else{
  	int len1 = abs(x1-x2);
  	int len2 = abs(y1-y2);
  	if(len1!=len2){
  		cout<<-1;
  	}
  	else{
  		if(y1<y2){
  			cout<<min(x1,x2)<<' '<<max(y1,y2)<<' ';
  			cout<<max(x1,x2)<<' '<<min(y1,y2);
  		}
  		else{
  			cout<<min(x1,x2)<<' '<<min(y1,y2)<<' ';
  			cout<<max(x1,x2)<<' '<<max(y1,y2);
  		}
  	}
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
