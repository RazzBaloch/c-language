#include<stdio.h>
 float convertTemp(float celcious);
 int main () {
     float far =convertTemp(42);
	 printf("far: %f",far )	;
 	return 0;
 }
 
 float convertTemp(float celcious){
 	float far = celcious * (9.0/5.0)+ 32;
	 return far;
 	
 }
