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

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    rll(n);
    rvll(arr,n-1);
    ll ans = n * (n+1)/2 -x accumulate(arr.begin(), arr.end(),0ll);
    cout<<ans<<'\n';
}