#include <iostream>
#include <vector>
using namespace std;


void PrintSolution(vector<vector<char>> &board, int n ){
    for(int i = 0; i < n ; i++){
        for (int j = 0; j < n ; j++){
            cout<<board[i][j]<<" ";

        }
        cout<<endl;  
    }
    cout<<endl<<endl;

}

bool isSafe(int row, int col, vector<vector<char>> &board,int n ){
    //we want to check that
    //ki kya hum current cell [row][col] pr
    // queen place kr shkte hain ya nahi

    int i = row;
    int j = col;

    //check left row
    while(j >= 0){
        if(board[i][j] == 'Q'){
            return false;
        }
        j--;
    }


    //upper left diagonal
    i = row;
    j = col;
    while(i >= 0 && j >= 0){
        if(board[i][j] == 'Q'){
            return false;
            
        }
        i--;
        j--;

    }

    //bottom left diagonal
    i = row;
    j = col;
    while(i < n && j >= 0){
        if(board[i][j] == 'Q'){
            return false;
        }
        i++;
        j--;
    }


    //kahin pe bhi queen nhi mili
    // iska matlab ye postion safe hai
    // reutrn ture kr do
    return true;
}

void solve(vector<vector<char>> &board, int col , int n){
    //base case
    if(col >= n){
        PrintSolution(board,n);
        return ;
    }


    //1 case solve karna hai, baki recursion shambhaal legega
    for (int row = 0; row < n ; row ++){
        if(isSafe(row,col,board,n)){
            //rakh do
            board[row][col] = 'Q';

            //recurive call
            solve(board,col+1,n);

            //backtracking 
            board[row][col] = '_';
        }
    }
}
 
int main(){
    int n = 4;
    vector <vector<char>> board (n,vector<char> (n,'_'));
    int col = 0;

    // 0 -> empty cell
    // 1 -> queent at the cell

    solve(board,col,n);


    return 0;
}