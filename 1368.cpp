
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
  int times;
  for(int i=1;i<=40;i++){
  	if(pow(i,10)>=n){
  		times=i;
  		break;
  	}
  }
  if(times==1){
  	cout<<"codeforces";return;
  }
  int count=0;
  int curr = pow(times-1,10);
  while(curr<n){
  	count++;
  	curr*=times;
  	curr/=(times-1);
  }
  // cout<<count;
  string str="codeforces";
  string res;
  
  for(int i=0;i<10;i++){
  	if(count){
  		for(int j=0;j<times;j++){
  			res+=str[i];
  		}
  		count--;
  	}
  	else{
  		for(int j=0;j<times-1;j++){
  			res+=str[i];
  		}
  	}
  }
  // cout<<times;
  cout<<res;
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
