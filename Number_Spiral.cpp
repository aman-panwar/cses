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
    tc{
        rll(y);
        rll(x);
        ull m= max(x,y);    
        ull n = m*m -m +1 +(m%2?(x-y):(y-x));
        cout<<n<<'\n';
    }
}
/*
        ll lim = 5;
        for(ll y=1; y<= lim;y++)
        {
            for(ll x=1;x<=lim;x++)
            {
                ll m= max(x,y);
                ll n = m*m -m +1 +(m%2?(x-y):(y-x));
                cout<<n<<"\t";
            }
            cout<<'\n';
        }
*/