#include <bits/stdc++.h>

using namespace std;

int sudoku[9][9];

int dx={1,2,3,4,5,6,7,8};
int dy={1,2,3,4,5,6,7,8};

bool backtrack(int sudoku[][9])
{
    return true;
}

int main()
{
    int n, aux;
    cin >> n;
    while (n--)
    {
        for (int i = 0; 9 > i; i++)
        {
            for (int j = 0; 9 > j; j++)
            {
                cin >> sudoku[i][j];
            }
        }
        if (backtrack(sudoku))
        {
            for (int i = 0; 9 > i; i++)
            {
                for (int j = 0; 9 > j; j++)
                {
                    cout << sudoku[i][j] << " ";
                }
                cout << "\n";
            }
        }
        else{
            cout << "No solution";
        }
        cout << "\n";
    }
    return 0;
}