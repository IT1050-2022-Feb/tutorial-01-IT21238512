/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() 
{
  float m1, m2;
	float total, avg;
	
	printf("Enter the marks of subject 1: ");
	scanf("%f", &m1);
	printf("Enter the marks of subject 2: ");
	scanf("%f", &m2);
	
	total = m1 + m2;
	
	avg = (total/2);
	
	printf("\nAverage mark = %.2f", avg);
  
  return 0;
}



