// Write programe to calculate the marks of 5 subject and also find the sum and percentage

#include<stdio.h>
#include<math.h>

/*
void main(){
    int m1,m2,m3,m4,m5;
    int sum;
    printf("Enter marks:\n");
    scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
    sum = m1+m2+m3+m4+m5;
    printf("Obtained Marks: %d \n",sum);
    printf("percentage: %0.2f ",sum/5.0);
}
*/

// Write the same programe using function and goto

void main(){
    void marks();
    marks();
}

void marks(){
    int m1,m2,m3,m4,m5,sum;
    char ch;
    marks:
    printf("Enter marks:\n");
    scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
    sum=m1+m2+m3+m4+m5;
    printf("Obtained marks: %d \n",sum);
    printf("percentage: %0.2f\n",sum/5.0);
    printf("Whether you again want to calculate:              (y/n)\n");
    fflush(stdin);
    scanf("%c",&ch);
    if (ch=='y'){
        goto marks;
    }
}