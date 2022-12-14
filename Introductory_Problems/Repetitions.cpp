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
    string s;
    cin>>s;

    int ans = 1;
    for(int cur_seg_size=1,i=1;i<(int)s.size();i++)
    {
        if(s[i]==s[i-1])cur_seg_size++;
        else cur_seg_size=1;
        ans = max(ans, cur_seg_size);
    }
    cout<<ans<<'\n';
}