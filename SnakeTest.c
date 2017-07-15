#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int main()
{
	int flag=1,i=0,j=0,a=0,b=0,x=0,y=3,x1=0,y1=2,x2=0,y2=1,x3=0,y3=0,m=4,n=4;
	char A[15][15],X[4][4],z;
	while(i<15)
	{	
		j=0;
		while(j<15)
		{
			A[i][j]=0;
			j++;
		}
		i++;
	}
	i=0;
	j=0;	
	while(flag=1)
	{	 
		A[a][b]=0;
		a=rand()%15;
		b=rand()%15;
		A[a][b]=1;
		while((x!=a) || (y!=b))
		{	
			i=0;
			j=0;
			system("cls");
			A[x][y]=62;
			A[x1][y1]=45;
			A[x2][y2]=45;
			A[x3][y3]=45;
			while(i<15)
			{	
				j=0;
				while(j<15)
				{	
					printf("%c",A[i][j]);
					j++;
				}
				printf("\n");
				i++;
			}
			printf("\nEnter your move('w'->UP, 's'->DOWN, 'd'->RIGHT, 'a'->LEFT) :- ");
			z=getchar();
			switch(z)
			{
				case 'w':	if(m==0)
								break;
							m=x-1;	
							break;
				case 's':	if(m==14)
								break;
							m=x+1;	
							break;		
				case 'a':	if(n==0)
								break;
							n=y-1;	
							break;
				case 'd':	if(n==14)
								break;
							n=y+1;	
							break;													
			}
			A[x3][y3]=0;
			x3=x2;
			y3=y2;
			x2=x1;
			y2=y1;
			x1=x;
			y1=y;
			x=m;
			y=n;
		}
		printf("\n***CHANGE***");
	}
	printf("\n***GAME OVER***");
	return 0; 
}
