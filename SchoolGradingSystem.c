#include <stdio.h>

/**
 * main - Prints the grade of a student
 *
 * Return: Always 0
 */
int main(void)
{
	float score;

  /* Tell the user to input score */
  printf("Enter your score in two decimal places:\n");
  /* Take the user's input */
    scanf("%f", &score);



	
	/**
	 * 80-100 = A
	 * 70-79 = B
	 * 65-69 = C
	 * 60-64 = D
	 * 50-59 = E
	 * Below 40 = F
	 */
	 
	 if (score >= 80.00 && score <= 100.00)
	 {
	     printf("Your grade is A\n");
	 }
	 else if (score >= 70.00 && score <= 79.00)
	 {
	     printf("Your grade is B\n");
	 }
	 else if (score >= 65.00 && score <= 69.00)
	 {
	     printf("Your grade is C\n");
	 }
	 else if (score >= 60.00 && score <= 64.00)
	 {
	     printf("Your grade is D\n");
	 }
	 else if (score >= 50.00 && score <= 59.00)
	 {
	     printf("Your grade is E\n");
	 }
	 else if (score >= 0.00 && score <= 49.00)
	 {
	     printf("Your grade is F\n");
	 }
	 else
	 {
	     printf("I don't know your grade\n");
	 }
	return (0);
}