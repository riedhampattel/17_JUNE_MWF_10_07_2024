#include<stdio.h>
#define N 10
int main()
{
	int arr[N][N] = {0};
	int i,j;
	
	int n = 1;
	int top = 0,bottom = N-1;//row
	int left = 0,right = N-1;//collumn
	
	while(top<=bottom && left<=right)
	{
		for(i=left;i<=right;i++)
		{
			arr[top][i] = n++;
		}
		top++;
		for(i=top;i<=bottom;i++)
		{
			arr[i][right] = n++;
		}
		right--;
		
		if(top<=bottom)
		{
			for(i=right;i>=left;i--)
			{
				arr[bottom][i] = n++;	
			}	
			bottom--;
		}
		if(left<=right)
		{
			for(i=bottom;i>=top;i--)
			{
				arr[i][left] = n++;
			}
			left++;
		}
	}
	
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			printf("%4d",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
