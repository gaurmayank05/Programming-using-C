#include<stdio.h>
void main(){
    int A[3][3],B[3][3],C[3][3],i,j;
    printf("Enter elements of matrix A\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&A[i][j]);
        }
    }
    printf("Enter elements of matrix B\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&B[i][j]);
        }
    }
    // Calculations
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            C[i][j]=A[i][j]+B[i][j];
        }
    }
    printf("Addition of two matrix is:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",C[i][j]);
        }
        printf("\n");
    }
}