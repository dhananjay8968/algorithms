// Problem Link - https://www.codechef.com/SNCK1B21/problems/QPLACE
// username - gabrudj

void solve()
{
    int n;
    cin >> n;
    char board[n][n];
    char *begin = &board[0][0];
    size_t size = sizeof(board) / sizeof(board[0][0]);
    fill(begin, begin + size, '.');
    for (int i = 0; i < n; i++)
    {
        board[i][i] = 'Q';
    }
    board[0][0] = '.';
    board[2][2] = '.';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << board[i][j];
        }
        cout << endl;
    }
}