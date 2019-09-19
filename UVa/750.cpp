#include <iostream>

using namespace std;

int r, c, lineCount;

bool OK(int *board, int row, int column) {
for(int i = 0; i < column; i++) {
    if(board[i] == row || (abs(board[i] - row) == abs(i - column)))
      return false;
  }

  return true;
}

void solve(int *board, int column) {
  if(column > c && board[c] != r)
    return;

  if(column == 8 && board[c] == r) {
    for(int i = 0; i < 8; i++) {
      if(!i)
        printf("%2d      %d", lineCount++, board[i]+1);
      else
        cout << " " << board[i]+1;
    }
    cout << endl;
    return;
  }

  for(int i = 0; i < 8; i++) {
    if(OK(board, i, column)) {
      board[column] = i;
      solve(board, column + 1);
    }
  }
}

int main() {

  //ios::sync_with_stdio(false); cin.tie(0);
  int n;
  int board[8]; // board[0] = 2 -> column 0 is placed in row 2

  scanf("%d\n", &n);
  while(n--) {
    cin >> r >> c;
    r--; c--; lineCount = 1;

    for(int i = 0; i < 8; i++)
      board[i] = -1;

    cout << "SOLN       COLUMN" << endl;
    cout << " #      1 2 3 4 5 6 7 8" << endl << endl;

    solve(board, 0);

    if(n)
      cout << endl;
  }

  return 0;
}