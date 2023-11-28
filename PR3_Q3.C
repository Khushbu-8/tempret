#include<stdio.h>
#include<conio.h>

void main(){
int n,i,digit;
	clrscr();
	printf("Enter a number :");
	scanf("%d",&n);
	      i=n%10;
	      while(n>=10){
	      n=n/10;
	      }
	      digit=n;
	      printf("sum of digit is %d",digit+i);


getch();
}