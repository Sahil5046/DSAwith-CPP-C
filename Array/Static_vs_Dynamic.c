#include<stdio.h>
#include<stdlib.h>

int main(){
    int a[5]={4,7,6,8,2};
    int *p;
    
    p=(int *)malloc(5*sizeof(int));
    
    p[0]=6;
    p[1]=4;
    p[2]=5;
    p[3]=8;
    p[4]=9;
    
    for(int i=0;i<5;i++){
        printf("%d ",a[i]);
    }
    
    printf("\n");
    
    for(int i=0;i<5;i++){
        printf("%d ",p[i]);
    }
}