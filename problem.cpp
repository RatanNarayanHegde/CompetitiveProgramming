
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
  int b[n+2];
  int sum=0;
  fo(i,n+2){
    cin>>b[i];
    sum+=b[i];
  }
  sort(b,b+(n+2));
  vector<int> ans;
  //last
  int last = b[n+1];
  int flag=0,val,ind;
  for(int i=0;i<n+1;i++){
    if(sum-last-b[i]==last){
      flag=1;
      val=b[i];
      ind=i;
      break;
    }
  }
  if(flag){
    for(int i=0;i<n+1;i++){
      if(i!=ind){
        ans.push_back(b[i]);
      }
    }
  }
  else{
    int s=b[n];
    int x = b[n+1];
    if(sum-s-x==s){
      flag=1;
      for(int i=0;i<n;i++){
        ans.push_back(b[i]);
      }
    }
  }
  if(flag){
    for(int i=0;i<n;i++){
      cout<<ans[i]<<' ';
    }

  }
  else{
    cout<<-1;
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
