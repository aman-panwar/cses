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
    rint(n);
    if(n/2==1)cout<<"NO SOLUTION\n";
    else
    {
        for(int i=2;i<=n;i+=2)cout<<i<<" ";
        for(int i=1;i<=n;i+=2)cout<<i<<" ";
        cout<<'\n';
    }
}