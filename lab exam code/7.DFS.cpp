#include <bits/stdc++.h>
using namespace std;
#define pi (3.141592653589)
#define mod 1000000007
#define ll long long
#define dd double
#define pb push_back
#define mp make_pair
#define ff first
#define se second
#define all(c) c.begin(), c.end()
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define rrep(i, n) for (int i = n - 1; i >= 0; i--)
#define rep(i, n) for (int i = 0; i < n; i++)
#define sp ' '
#define nl endl
#define vi vector<int>
#define vs vector<string>
#define mai map<ll, int>
#define mas map<string, int>
#define ss string
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
/*

bool isPrime(int n){
 if(n==1) return false;
 if(n==2) return true;
 for(int i=2;i*i<=n;i++){
 if(n%i==0)return false;
 }
 return true;
} */
const int N = 1e5 + 2;
vector<int> g[N];
bool vis[N];
int cnt;
void dfs(int vertex)
{
    cout<<vertex<<"->";
    /*1.. take action on vertex after entering the vertex */
    
    vis[vertex] = true;
    for (auto child : g[vertex])
    {

        /*2...take action on child node before entering child node*/
        if (vis[child])
            continue;
        //cout << "par" << sp << vertex << sp << "Child" << sp << child << nl;
        dfs(child);
        /*3.. take action on child node after exiting child node */
    }
    // cnt++;

    /*4...take action on vertex before exiting  vertex node*/
}

int main()
{
    fast

        int n,
        e;
    cin >> n >> e;
    for (int i = 1; i <= e; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;
        g[v1].pb(v2);
        g[v2].pb(v1);
    }
    /*for(int i=1;i<=n;i++){
        cout<<i<<sp;
        for(auto u: g[i]){
            cout<<u<<sp;
        }
        cout<<nl;

    } */
    // int source;
    // cin>>source;
    // dfs(source);
    dfs(0);
    // cout<<cnt-1<<nl;
    return 0;
}
