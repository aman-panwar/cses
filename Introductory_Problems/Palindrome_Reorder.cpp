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
    rstring(s);
    vector<int> map(26);
    for (auto &i : s)
        map[i - 'A']++;
    int num_of_odd_chars = 0;
    for (auto &i : map)
        num_of_odd_chars += i % 2;
    if (num_of_odd_chars > 1)
    {
        cout << "NO SOLUTION\n";
    }
    else
    {
        string first, middle, last;
        for(size_t i=0;i<map.size();i++)
        {
            char c = 'A'+i;
            if(map[i]%2)middle = c;
            first +=string(map[i]/2,c);
            last = string(map[i]/2,c) + last;
        }
        cout<<first+middle+last<<'\n';
    }
}