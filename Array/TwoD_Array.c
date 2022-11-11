#include <stdio.h>
#include<stdlib.h>



int main()
{
    int a[3][4]={{1,2,3,4},{4,2,5,1},{7,3,5,1}};
    
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
    //Now make in heap
    int *b[3];
    int **c;
    
    b[0]=(int *)malloc(4*sizeof(int));
    b[1]=(int *)malloc(4*sizeof(int));
    b[2]=(int *)malloc(4*sizeof(int));
    
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
    
    c=(int **)malloc(3*sizeof(int*));
    c[0]=(int *)malloc(4*sizeof(int));
    c[1]=(int *)malloc(4*sizeof(int));
    c[2]=(int *)malloc(4*sizeof(int));
    
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    
}
