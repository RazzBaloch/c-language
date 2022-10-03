#include <stdio.h>
 void printString(char arr[]);
 
 
 int main(){
 	char firstname[]= "riyaz ";
 	char lastname[]= "baloch";
 	  printString(firstname);
 	  printString(lastname);
 	   return 0;
 	   
 }
  void printString(char arr[]) 
  {
  	for(int i=0; i<=6; i++ ){
  		printf("%c", arr[i]);
  		
	  } 
	  printf("\n");
	  
	  
  }
