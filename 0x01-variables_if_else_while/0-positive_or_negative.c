#include <stdlib.h> 
 #include <time.h> 
 /**
  * positive number: greater than 0
  * negative number: less than 0
  */ 
/**
 * main - Entry point
 * 
 * Description: 'the program's description'
 * 
 * Return: Always 0 (Success)
 */ 
int main(void) 
 { 
         int n; 
  
         srand(time(0)); 
         n = rand() - RAND_MAX / 2; 
 if(n>=0){
	 printf(n,"is positive\n")
 }
 else(n<0){
	 printf(n,"is negatove\n")
        return (0);
	 
 }
