#include <stdio.h>
#include <string.h>

void main() {
    int i,j,n,k,N;//N-number of matrix
    int mat1[50][50],mat2[50][50],mat3[50][50],mat4[50][50],mat5[50][50];
    printf("enter the number of matrices (N): ");
    scanf("%d",&N);
    printf("enter the value of n: ");
    scanf("%d",&n);
    for(k=1;k<=N;k++)
    {
        printf("Matrix %d!\n",k);
        for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("element [%d][%d]: ",i,j);
            if(k==1)
            scanf("%d",&mat1[i][j]);
            else if(k==2)
            scanf("%d",&mat2[i][j]);
            else if(k==3)
            scanf("%d",&mat3[i][j]);
            else if(k==4)
            scanf("%d",&mat4[i][j]);
            else if(k==5)
            scanf("%d",&mat5[i][j]);
        }
    }
    }
    
    printf("Sum of the matrix: \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(N==1)
            printf("%d ",mat1[i][j]);
            else if(N==2)
            printf("%d ",mat1[i][j]+mat2[i][j]);
            else if(N==3)
            printf("%d ",mat1[i][j]+mat2[i][j]+mat3[i][j]);
            else if(N==4)
            printf("%d ",mat1[i][j]+mat2[i][j]+mat3[i][j]+mat4[i][j]);
            else if(N==5)
            printf("%d ",mat1[i][j]+mat2[i][j]+mat3[i][j]+mat4[i][j]+mat5[i][j]);
        }
        printf("\n");
    }
}
