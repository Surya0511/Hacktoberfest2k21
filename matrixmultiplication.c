//wap to multiply the elements of two matrices
#include<stdio.h>
void main()
{int row1,row2,col1,col2;

  printf("enter no of rows you want in the first matrix \n");
  scanf("%d",&row1);
  printf("enter no of col you want in the first matrix \n");
  scanf("%d",&col1);
  printf("enter no of rows you want in the second matrix\n");
  scanf("%d",&row2);
  printf("enter no of col you want in the second matrix \n");
  scanf("%d",&col2);
if(col1==row2){
	printf("matrix multiplication is possible \n");
	int arr1[row1][col1];
    int arr2[row2][col2];
	int arr3[row1][col2];
	int i,j,k;
	int sum=0;
	printf("enter the elements of first matrix");

	for(i=0;i<row1;i++)
	{    for(j=0;j<col1;j++)
	     {
	     	scanf("%d",&arr1[i][j]);
	            	
	     } printf("\n");
	}
	
	printf("enter the elements of second matrix");
	for(i=0;i<row2;i++)
	{    
	     for(j=0;j<col2;j++)
	     {
	     	scanf("%d",&arr2[i][j]);
	            	
	     } printf("\n");
	}
	
	for(i=0;i<row1;i++)
      {for(j=0;j<col2;j++)
       { for(k=0;k<col1;k++)
          { 
          sum=sum+arr1[i][k]*arr2[k][j];
		  }
		  arr3[i][j]=sum;
		  sum=0;
       }
	  }
for(i=0;i<row1;i++)
{for(j=0;j<col2;j++)
   {  printf("2%d ",arr3[i][j]);
   } 
   printf("\n"); }
}
else
{printf("matrix multiplication is not possible");

}


}
output
enter no of rows you want in the first matrix
2
enter no of col you want in the first matrix
3
enter no of rows you want in the second matrix
3
enter no of col you want in the second matrix
4
matrix multiplication is possible
enter the elements of first matrix
1 2 3

1 3 4

enter the elements of second matrix
1 2 1 1

1 2 4 2

1 1 1 1

6 9  12  8
8 12 17 11

