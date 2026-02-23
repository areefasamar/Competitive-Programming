// Problem: Where's The Bishop
// URL: https://codeforces.com/contest/1692/problem/C
// Rating: 800

#include <stdio.h>
int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        char board[8][9];

        for (int i = 0; i < 8; ) {
            if (scanf("%s", board[i]) == 1) {
                i++;
            }
        }

        for (int r = 1; r <= 6; r++) {
            for (int c = 1; c <= 6; c++) {
                if (board[r][c] == '#' &&
                    board[r-1][c-1] == '#' &&
                    board[r-1][c+1] == '#' &&
                    board[r+1][c-1] == '#' &&
                    board[r+1][c+1] == '#') {

                    printf("%d %d\n", r + 1, c + 1);
                }
            }
        }
    }

    return 0;
}