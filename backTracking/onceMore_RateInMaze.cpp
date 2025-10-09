#include <iostream>
#include <vector>
using namespace std;

bool isSafe(int i , int j , int row, int col, int maze[3][3], vector<vector<bool> >&visited){

    if(((i>=0 && i<row)&&(j>= 0 && j<col)) &&
       (maze[i][j] == 1) && 
       (visited[i][j] == false)){
        return true;
    }
    else{
        return false;
    }

}

void solveMaze(int maze[3][3], int row, int col, int i , int j , vector<string> &path, string output,
    vector<vector<bool>> &visited){
    //base case
    if(i == row-1 && j == col-1){
        //reached to destination
        path.push_back(output);
        return;
    }


    //Up -> i-1, j
    if(isSafe(i-1,j,row,col,maze,visited)){
        visited[i-1][j] = true;
        //rc
        solveMaze(maze,row,col,i-1,j,path,output+'U',visited);
        //backtracking
        visited[i-1][j] = false;

    }

    //Down -> i+1,j
    if(isSafe(i+1,j,row,col,maze,visited)){
        visited[i+1][j] = true;
        //rc
        solveMaze(maze,row,col,i+1,j,path,output+'D',visited);
        //bt
        visited[i+1][j] = false;
    }

    //Left  -> i,j-1
    if(isSafe(i,j-1,row,col,maze,visited)){
        visited[i][j-1] = true;
        //rc
        solveMaze(maze,row,col,i,j-1,path,output+'L',visited);
        //bt
        visited[i][j-1] = false;
    }

    //Right -> i,j+1
    if(isSafe(i,j+1,row,col,maze,visited)){
        visited[i][j+1] = true;
        //rc
        solveMaze(maze,row,col,i,j+1,path,output+'R',visited);
        //bt
        visited[i][j+1] = false;
    }
}

int main(){
    int maze[3][3] = {{1,0,0},
                      {1,1,0},
                      {1,1,1}};

    int row = 3;
    int col = 3;

    //creating a visited 2d vector with false inisilized value
    vector<vector<bool>>visited(row, vector<bool>(col,false));

    //we make sure that source must be true
    visited[0][0] = true;

    vector<string>path;
    string output;


    //function
    solveMaze(maze,row,col,0,0,path,output,visited);


    cout<<"printing answers"<<endl;
    for(auto i :path){
        cout<< i <<" ";
    }

    cout<<endl;

    

    return 0;
}