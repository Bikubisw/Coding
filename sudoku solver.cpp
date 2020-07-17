#include<bits/stdc++.h>
using namespace std;
bool sudokuSolver(int board[][9]);

bool isempty(int board[][9],int &row,int &col)
{
	for(int i=0;i<9;i++)
	{
		for(int j=0;j<9;j++)
		{
			if(board[i][j]==0){
				row=i;
				col=j;
				return true;
			}
		}
	}
	return false;
}
bool issafeinrow(int board[][9],int row,int num)
{
	for(int i=0;i<9;i++)
	{
		if(board[row][i]==num)
		{
			return false;
		}
	}
	return true;
}
bool issafeincol(int board[][9],int col,int num)
{
		for(int i=0;i<9;i++)
	{
		if(board[i][col]==num)
		{
			return false;
		}
	}
	return true;
}
bool issafeingrid(int board[][9],int row,int col,int num)
{
	int rowfactor=row-(row%3);
	int colfactor=col-(col%3);
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
		{
				if(board[i+rowfactor][j+colfactor]==num)
		{
			return false;
		}
	}
	return true;
		}
	
bool issafe(int board[][9],int row,int col,int num)
{
	if(issafeinrow(board,row,num)&&issafeincol(board,col,num)&&issafeingrid(board,row,col,num)){
		return true;
	}
	return false;
	
}
bool sudokuSolver(int board[][9])
{
	int row,col;
	if(!isempty(board,row,col))
	{
		return true;
	}
	for(int i=1;i<=9;i++)
	{
		if(issafe(board,row,col,i))
		{
		board[row][col]=i;
		if(sudokuSolver(board)){
			return true;
		}
		board[row][col]=0;
		
		}
	}
	return false;
}
int main()

{
	int n=9;

 int board[9][9];

for(int i=0;i<n;i++)
{
	for(int j=0;j<n;j++)
	{
		cin>>board[i][j];
	}
 }
 if(sudokuSolver(board))
 {
 	cout<<"true";
  } 
  else
  {
  	cout<<"false";
  }
	

return 0;

}

