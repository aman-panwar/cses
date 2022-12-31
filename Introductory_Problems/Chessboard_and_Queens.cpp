#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned ll
#define rint(x) int x; cin>>x;
#define rll(x) ll x;cin>>x;
#define rstring(x) string x;cin>>x;
#define all(x) x.begin(), x.end()
#define vi vector<int>
#define vll vector<ll>
#define rvi(x,y) vi x(y); for(auto &i:x)cin>>i;
#define rvll(x,y) vll x(y); for(auto &i:x)cin>>i;
#define tc rll(__TEST_CASE__);for(int __test_case__ =1; __test_case__<=__TEST_CASE__;__test_case__++)
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL);

#define EMPTY   '.'
#define BLOCKED '*'
#define QUEEN   'Q'

vector<vector<char>> board(8, vector<char>(8));
bool can_place_queen(int index)
{
    int row = index / 8;
    int col = index % 8;

    bool poss = false;
    if (board[row][col] == EMPTY)
    {
        poss = true;
        for(int i=0;i<8;i++)poss&=(board[i][col]!=QUEEN && board[row][i]!=QUEEN);
        if(poss)for(int r=row - min(row,col),c=col - min(row,col); r<8&&r>=0&&c<8&&c>=0;c++,r++)poss&=(board[r][c]!=QUEEN);
        if(poss)for(int r=row - min(row,7-col),c=col+min(row,7-col); r<8&&r>=0&&c<8&&c>=0;c--,r++)poss&=(board[r][c]!=QUEEN);
    }
    return poss;
}
ll solve(int index = 0, int queens_to_place = 8)
{
    ll ans = 0;
    for (int i = index; i < 64; i++)
    {
        if (can_place_queen(i))
        {
            if (queens_to_place == 1) return 1;
            board[i / 8][i % 8] = QUEEN;
            ans += solve(i + 1, queens_to_place - 1);
            board[i / 8][i % 8] = EMPTY;
        }
    }
    return ans;
}
int main()
{
    //FAST_IO
    for (auto &row : board)
        for (auto &tile : row)
            cin >> tile;

    cout << solve() << '\n';
}