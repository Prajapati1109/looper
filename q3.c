#include<stdio.h>

  int main(){
  	
  	int fd,ld,num,sum=0;
  	
  	printf("Enter the Number:");
  	scanf("%d",&num);
  	ld=num%10;
  	while(num>=10)
  	{
  		num/=10;
	  }
	  fd=num;
	  sum=fd+ld;
	  
	  printf("The sum of the fd and ld :%d",sum);
  }
