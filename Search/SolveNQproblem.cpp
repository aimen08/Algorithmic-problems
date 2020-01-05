
#include <bits/stdc++.h>
#define N 8
using namespace std;

typedef long long ll;

bool isSafe(int board[N][N],int row,int col){
    int i,j;
    for( i=0;i<col;i++)
        if(board[row][i])
            return false;
    for( i=row, j=col;i>=0 && j>=0;i--,j--)
        if(board[i][j])
            return false;
    for( i = row, j =col;j>=0 && i<N;i++,j--)
        if(board[i][j])
            return false;
    return true;            
}

bool solveNQUtil(int board[N][N],int col){
    

    if(col>=N)
        return true;
    for(int i=0;i<N;i++){
        if(isSafe(board,i,col)){
            board[i][col]=1;
          if(solveNQUtil(board,col+1))
                return true;
            board[i][col]=0;  
        }

    }
    return false;


}


void solveNQ(int board[N][N]){

    if(!solveNQUtil(board,0))
        cout<<"nosol"<<endl;
    else
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++)
                cout<<board[i][j]<<" ";
            cout<<"\n";
        }

}


int main()
{
	ios_base::sync_with_stdio(0);
 /* code */
    
    int board[8][8]={{0,0,0,0,0,0,0,0},
                     {0,0,0,0,0,0,0,0},
                     {0,0,0,0,0,0,0,0},
                     {0,0,0,0,0,0,0,0},
                     {0,0,0,0,0,0,0,0}};

    solveNQ(board);                
}



 