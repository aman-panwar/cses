#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned ll
#define rint(x) int x; cin>>x;
#define rll(x) ll x;cin>>x;
#define vi vector<int>
#define vll vector<ll>
#define rvi(x,y) vi x(y); for(auto &i:x)cin>>i;
#define rvll(x,y) vll x(y); for(auto &i:x)cin>>i;
#define tc rll(__TEST_CASE__);for(int __test_case__ =1; __test_case__<=__TEST_CASE__;__test_case__++)
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL);

#define MOD ((ll)1e9+7)

int power(ll a, ll n)
{
    ll res=1;
    a%=MOD;
    while(n)
    {
        if(n&1)res=(res*a)%MOD;
        a = (a*a)%MOD;
        n>>=1;
    }
    return res;
}
int main()
{
    rint(n);
    cout<<power(2,n)<<'\n';
}