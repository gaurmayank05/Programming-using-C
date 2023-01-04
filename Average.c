// Write programe to calculate the marks of 5 subject and also find the sum and percentage

#include<stdio.h>
#include<math.h>


void main(){
    int m1,m2,m3,m4,m5;
    int sum;
    printf("Enter marks:\n");
    scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
    sum = m1+m2+m3+m4+m5;
    printf("Obtained Marks: %d \n",sum);
    printf("percentage: %0.2f ",sum/5.0);
}
