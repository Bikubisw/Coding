#include<bits/stdc++.h>
using namespace std;
void printsolution(int **solution,int n)
{for(int i=0;i<n;i++)
	{for(int j=0;j<n;j++)
		{
			cout<<solution[i][j]<<" ";
		}
		}
		cout<<endl;
}
void mazhelp(int maze[][20],int n,int **solution,int x,int y)
{
	if(x==n-1&&y==n-1)
	{
		solution[x][y]=1;
		printsolution(solution,n);
		return;
	}
	if(x>=n||x<0||y>=n||y<0||maze[x][y]==0||solution[x][y]==1){
	return;
	}
	
	solution[x][y]=1;
	mazhelp(maze,n,solution,x-1,y);//upper path
	mazhelp(maze,n,solution,x+1,y);//lower path
	mazhelp(maze,n,solution,x,y-1);//left path
	mazhelp(maze,n,solution,x,y+1);//right path
	solution[x][y]=0;
}
void ratInMaze(int maze[][20],int n)
{
int** solution=new int*[n];
for(int i=0;i<n;i++)
{
	solution[i]=new int[n];
}
mazhelp(maze,n,solution,0,0);
		
}
int main()
{
	int n;
	cin>>n;
	int maze[20][20];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>maze[i][j];
		}
	}
	ratInMaze(maze,n);
	
}

























