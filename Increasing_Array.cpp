#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned ll
#define rint(x) int x; cin>>x;
#define rll(x) ll x;cin>>x;
#define tc rll(__TEST_CASE__);for(int __test_case__ =1; __test_case__<=__TEST_CASE__;__test_case__++)

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    rint(n);
    vector<ll> arr(n);
    for(auto &i:arr)cin>>i;

    ll ans=0;
    for(int i=1;i<n;i++)
    {
        ans += max(arr[i-1]-arr[i], 0ll);
        arr[i] = max(arr[i],arr[i-1]);
    }
    cout<<ans<<'\n';
}