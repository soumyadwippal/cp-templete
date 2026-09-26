#include <bits/stdc++.h>
using namespace std;

// ======================================================
//              Codeforces CP Template
//          Author : soumyadwip_pal (Soumya_26H)
// ======================================================

// ---------- Fast I/O ----------
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);

// ---------- Type Aliases ----------
using ll = long long;
using ld = long double;
using ull = unsigned long long;

using pii = pair<int,int>;
using pll = pair<ll,ll>;

using vi = vector<int>;
using vll = vector<ll>;
using vpii = vector<pii>;
using vpll = vector<pll>;

// ---------- Shortcuts ----------
#define pb push_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) (int)(x).size()

// ---------- Constants ----------
const int INF = 1e9;
const ll LINF = 4e18;
const int MOD = 1e9 + 7;
const ld EPS = 1e-9;

// ======================================================
//                    DEBUG (Local Only)
// ======================================================
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " = "; _print(x); cerr << '\n';
#else
#define debug(x)
#endif

void _print(int x){ cerr << x; }
void _print(ll x){ cerr << x; }
void _print(char x){ cerr << x; }
void _print(string x){ cerr << x; }
void _print(bool x){ cerr << (x ? "true" : "false"); }

template<class T,class V>
void _print(pair<T,V> p){
    cerr << "{";
    _print(p.ff);
    cerr << ",";
    _print(p.ss);
    cerr << "}";
}

template<class T>
void _print(vector<T> v){
    cerr << "[ ";
    for(auto i:v){
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}

// ======================================================
//                  Number Theory
// ======================================================

// GCD (Iterative Euclid)
ll gcd(ll a,ll b){
    while(b){
        a %= b;
        swap(a,b);
    }
    return abs(a);
}

// LCM
ll lcm(ll a,ll b){
    return a / gcd(a,b) * b;
}

// Extended GCD
ll ext_gcd(ll a,ll b,ll &x,ll &y){
    if(b==0){
        x=1;
        y=0;
        return a;
    }
    ll x1,y1;
    ll g = ext_gcd(b,a%b,x1,y1);
    x=y1;
    y=x1-y1*(a/b);
    return g;
}

// Binary Exponentiation
ll binpow(ll a,ll b,ll mod=MOD){
    ll res=1;
    a%=mod;
    while(b){
        if(b&1) res=res*a%mod;
        a=a*a%mod;
        b>>=1;
    }
    return res;
}

// Modular Inverse (MOD must be prime)
ll modInverse(ll a,ll mod=MOD){
    return binpow(a,mod-2,mod);
}


// prime check

bool isPrime(ll n){
    if(n < 2) return false;
    for(ll i=2;i*i<=n;i++)
        if(n%i==0) return false;
    return true;
}

//sieve

vector<bool> prime(1000001,true);

void sieve(){
    prime[0]=prime[1]=false;
    for(int i=2;i*i<=1000000;i++){
        if(prime[i]){
            for(int j=i*i;j<=1000000;j+=i)
                prime[j]=false;
        }
    }
}

//prefix sum

vector<ll> prefix(n+1,0);
for(int i=0;i<n;i++)
    prefix[i+1]=prefix[i]+a[i];

//Direction Arrays (Grid Problems)
int dx[4]={-1,0,1,0};
int dy[4]={0,1,0,-1};

int dx8[8]={-1,-1,-1,0,0,1,1,1};
int dy8[8]={-1,0,1,-1,1,-1,0,1};

//Frequency Map
map<int,int> mp;
unordered_map<int,int> ump;
// ======================================================
//                     Solve Function
// ======================================================

void solve(){

}

// ======================================================
//                        Main
// ======================================================

int main(){
    FAST_IO

    int T = 1;
    cin >> T;

    while(T--){
        solve();
    }

    return 0;
}

