#include<stdio.h>
#include<conio.h>
void main(){
int insertation(int[],int);
int arr[50],size,i;
clrscr();
printf("Enter the size of the array: ");
scanf("%d",&size);
printf("Enter the elements of array: ");
for(i=0;i<size;i++){
scanf("%d",&arr[i]);
}
insertation(arr,size);
getch();
}

int insertation(int arr[],int size){
int item,position,i;
printf("Enter the item to be inserted: ");
scanf("%d",&item);
printf("At what position it has to be inserted: ");
scanf("%d",&position);
for(i=size;i>=position;i--){
arr[i]=arr[i-1];
}
arr[position-1]=item;
size=size+1;
for(i=0;i<size;i++){
printf("%d\n",arr[i]);
}
return 0;
}