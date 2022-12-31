#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned ll
#define rint(x) \
    int x;      \
    cin >> x;
#define rll(x) \
    ll x;      \
    cin >> x;
#define rstring(x) \
    string x;      \
    cin >> x;
#define all(x) x.begin(), x.end()
#define vi vector<int>
#define vll vector<ll>
#define rvi(x, y)     \
    vi x(y);          \
    for (auto &i : x) \
        cin >> i;
#define rvll(x, y)    \
    vll x(y);         \
    for (auto &i : x) \
        cin >> i;
#define tc              \
    rll(__TEST_CASE__); \
    for (int __test_case__ = 1; __test_case__ <= __TEST_CASE__; __test_case__++)
#define FAST_IO                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
int main()
{
    FAST_IO
    rint(n);
    rvll(arr, n);
    ll ans = numeric_limits<ll>::max();
    for (int i = 0; i < 1 << n; i++)
    {
        ll sum = 0;
        for (int bi = 0; bi < n; bi++)
        {
            if (i & (1 << bi))
                sum += arr[bi];
            else
                sum -= arr[bi];
        }
        ans = min(abs(sum), ans);
    }
    cout << ans << '\n';
}