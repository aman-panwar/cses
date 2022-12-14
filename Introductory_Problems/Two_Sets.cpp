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
int main()
{
    FAST_IO
    rint(n);
    ll sum = n * (n + 1) / 2;
    if (sum % 2)
        cout << "NO\n";
    else
    {
        cout<<"YES\n";
        cout<<(n+1)/2<<'\n';
        for(int i = 0; i<n/4 ;i++)cout<<n-4*i<<" "<<n-4*i-3<<" ";
        if(n%4==3)cout<<"1 2";

        cout<<'\n'<<n/2<<'\n';
        for(int i = 0; i<n/4 ;i++)cout<<n-4*i-1<<" "<<n-4*i-2<<" ";
        if(n%4==3)cout<<"3";
        cout<<'\n';
    }
}