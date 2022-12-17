// Program to find out the year is leap year or not using functions.
#include<stdio.h>
#include<conio.h>

void leap_year(){
    int year;
    char opt;

    //clrscr();
    L1:
    printf("Enter year: ");
    scanf("%d",&year);
    if(year % 400 == 0){
        printf("%d is a leap year.\n",year);
    }
    else if(year % 100==0){
        printf("%d is not a leap year.\n",year);
    }
    else if(year % 4 ==0){
        printf("%d is a leap year.\n",year);
    }
    else{
        printf("%d is not a leap year.\n",year);
    }
    printf("Whether you further want check?        (y/n)\n");
    fflush(stdin);    
    scanf("%c",&opt);
    if (opt == 'y'){
        goto L1;
    }
}

void main(){
    leap_year();

}
