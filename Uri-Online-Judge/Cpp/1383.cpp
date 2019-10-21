#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

bool checkQ(vector< vector<int> > sudoku, int i, int j, int sum) {
  vector<bool> nums(9, false);
  for(int k = i; k < i+3; k++) {
    for(int l = j; l < j+3; l++) {
      if(nums[sudoku[k][l]-1])
        return false;
      nums[sudoku[k][l]-1] = true;
    }
  }

  nums.clear();

  return true;
}

bool checkSudoku(vector< vector<int> > sudoku) {
  int sum = 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9;
  vector<bool> nums(9);

  for(int i = 0; i < 9; i++) {
    fill(nums.begin(), nums.end(), false);
    for(int j = 0; j < 9; j++) {
      if(nums[sudoku[i][j]-1])
        return false;
      nums[sudoku[i][j]-1] = true;
    }
  }

  for(int j = 0; j < 9; j++) {
    fill(nums.begin(), nums.end(), false);
    for(int i = 0; i < 9; i++) {
      if(nums[sudoku[i][j]-1])
        return false;
      nums[sudoku[i][j]-1] = true;
    }
  }

  nums.clear();

  for(int i = 0; i <= 6; i += 3) {
    for(int j = 0; j <= 6; j += 3) {
      if(!checkQ(sudoku, i, j, sum))
        return false;
    }
  }

  return true;
}

int main() {
  
  ios::sync_with_stdio(false); cin.tie(0);
  int n, a;
  vector< vector<int> > sudoku(9, vector<int>(9));

  cin >> n;
  for(int k = 1; k <= n; k++) {
    for(int i = 0; i < 9; i++) {
      for(int j = 0; j < 9; j++) {
        cin >> a;
        sudoku[i][j] = a;
      }
    }

    cout << "Instancia " << k << endl;
    if(checkSudoku(sudoku))
      cout << "SIM" << endl;
    else
      cout << "NAO" << endl;
    cout << endl;
  }

  return 0;
}