#include<stdio.h>
 int sum (int n);
 
 int main(){
  	printf("sum is : %d", sum(22));
  	  return 0;
  }
   int sum(int n){
   	if(n ==1){
	 return 1;
	  }
	   
   int sumN1= sum(n-1);
   int sumN =sumN1+n;
   return sumN;
}
