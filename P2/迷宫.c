#include <stdio.h>
#include <stdlib.h>
int matrix[8][8];
int visited[8][8];
int sum=0;
int n,m,fix,fiy;//n为行数,m为列数


void dfs(int x,int y)
{
	int nextx,nexty;
	if(x==fix&&y==fiy)
	{
		sum++;
		return;
	}
	nextx=x+1;
	if(nextx>0&&nextx<=n)
	{
		if(visited[nextx][y]==0&&matrix[nextx][y]==0)
		{
			visited[nextx][y]=1;
			dfs(nextx,y);
			visited[nextx][y]=0;
		}
	}
	nextx=x-1;
	if(nextx>0&&nextx<=n)
	{
		if(visited[nextx][y]==0&&matrix[nextx][y]==0)
		{
			visited[nextx][y]=1;
			dfs(nextx,y);
			visited[nextx][y]=0;
		}
	}
	nexty=y+1;
	if(nexty>0&&nexty<=m)
	{
		if(visited[x][nexty]==0&&matrix[x][nexty]==0)
		{
			visited[x][nexty]=1;
			dfs(x,nexty);
			visited[x][nexty]=0;
		}
	}
	nexty=y-1;
	if(nexty>0&&nexty<=m)
	{
		if(visited[x][nexty]==0&&matrix[x][nexty]==0)
		{
			visited[x][nexty]=1;
			dfs(x,nexty);
			visited[x][nexty]=0;
		}
	}
}
int main()
{

	int i,j,initx,inity;
	scanf("%d%d",&n,&m);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			scanf("%d",&matrix[i][j]);
		}
	}
	scanf("%d%d%d%d",&initx,&inity,&fix,&fiy);
	visited[initx][inity]=1;
	dfs(initx,inity);
	printf("%d",sum);
	return 0;
}
