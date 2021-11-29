#include <bits/stdc++.h>
#include<conio.h>
using namespace std;

void helper(int r, int c, vector<vector<char>> &a, map<pair<int,int>,map<int,int>> &m, vector<map<int,int>> &row, vector<map<int,int>> &col)
{  //cout<<"\nyo\n";
    if(r == 9)
    {
        for(auto it : a)
         {   for(auto i : it)
                cout<<i<<" ";

            cout<<'\n';
         }

         cout<<'\n';
         return;
    }

    if(c == 9)
        {
            helper(r+1, 0, a, m, row, col);
            return;
        }

    if(a[r][c] != '.')
    {  
        helper(r, c+1, a, m, row, col);
        return;
    }

    for(int i = 1; i<=9 ; i++)
    {
        int rw = r/3, cl= c/3;

        if(!m[{rw,cl}][i] and !row[r][i] and !col[c][i])
        {
            m[{rw,cl}][i] = 1;
            row[r][i] = 1;
            col[c][i] = 1;
            a[r][c] = i+'0';
            helper(r,c+1,a,m,row,col);
            m[{rw,cl}][i] = 0;
            row[r][i] = 0;
            col[c][i] = 0;
            a[r][c] = '.';

        }
    }

}

void solve_Sudoko(vector<vector<char>> &a)
{  //cout<<"Hi";
    map<pair<int,int>,map<int,int>> m;
    vector<map<int,int>> row(9);
    vector<map<int,int>> col(9);

    for(int i=0;i<9;i++)
    {    for(int j=0;j<9;j++)
        {
            if(a[i][j] != '.')
            {
                m[{i/3,j/3}][a[i][j] - '0'] = 1;   //element exist stroing the sqaure number and element
                row[i][a[i][j] - '0'] = 1;
                col[j][a[i][j] - '0'] = 1;
            }
        }
    }

    helper(0,0,a,m,row,col);
}

int main()
{
    vector<vector<char>> sudoku = {
        {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
        {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
        {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
        {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
        {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
        {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
        {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
        {'.', '.', '.', '.', '1', '9', '.', '.', '5'},
        {'.', '.', '.', '.', '8', '.', '.', '7', '9'}
    };
    vector<vector<char>> sudoku2 = {
        {'.','1','6','.','2','.','3','.','.'},
        {'4','.','2','7','.','3','.','.','8'},
        {'3','.','.','.','.','5','.','.','6'},
        {'9','4','.','.','7','2','5','.','3'},
        {'.','7','5','.','3','.','.','9','4'},
        {'.','3','1','.','.','.','.','.','.'},
        {'8','.','.','1','5','.','.','6','.'},
        {'.','.','9','2','8','4','7','.','.'},
        {'.','.','4','3','.','6','.','8','.'},
    };


    solve_Sudoko(sudoku2);
    getch();
}