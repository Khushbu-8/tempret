#include<stdio.h>
#include<conio.h>

void main(){
int n,count=0;
	clrscr();
	printf("Enter a number :");
	scanf("%d",&n);

	      while(n!=0){
	      n=n/10;
	      count++;
	      }

	      printf("Total number of  digit is %d",count);


getch();
}