#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned ll
#define rint(x) int x; cin>>x;
#define rll(x) ll x;cin>>x;
#define rstring(x) string x;cin>>x;
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
    for (int index = 0; index < (1 << n); index++)
    {
        int gray_number = index ^ (index >> 1);
        for (int bit = n - 1; bit >= 0; bit--)
            cout << bool(gray_number & (1 << bit));
        cout << '\n';
    }
}