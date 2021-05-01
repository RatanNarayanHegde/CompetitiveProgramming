
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
  string str1,str2;
  cin>>str1;
  cin>>str2;
  vector<int> v1(n),v2(n);
  for(int i=0;i<n;i++){
  	int a1 = str1[i]-'0';
  	v1[i]=a1;
  	a1 = str2[i]-'0';
  	v2[i]=a1;
  }
  sort(v1.begin(),v1.end());
  reverse(v1.begin(),v1.end());
  sort(v2.begin(),v2.end());
  reverse(v2.begin(),v2.end());
  i=0,j=0;
  int count=0;
  while(i<n && j<n){
  	if(v1[i]>v2[j]){
  		count++;
  		i++;
  	}
  	else{
  		i++;
  		j++;
  	}
  }
  cout<<count<<'\n';
  i=0,j=0;
  count=0;
  while(i<n && j<n){
  	if(v2[j]>v1[i]){
  		count++;
  		i++;j++;
  	}
  	else{
  		i++;
  	}
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
