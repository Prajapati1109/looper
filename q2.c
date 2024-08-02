#include<stdio.h>

 int main(){
 	
 	int num,i,count;
 	
 	printf("Enter the number:");
 	scanf("%d",&num);
 	
 	for(;num!=0;num/=10){
 		count++;
 	
	 }
 		
		printf("Total Number:%d",count);
 }
