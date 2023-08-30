#include <stdio.h>

/**
 * main - Calculates BMI
 * @height: height input in metres.
 * @weight: weight input in kilograms.
 * Return: Always 0.
 */

int main(void)
{
  float height, weight, BMI;

  /* Tell the user to input height in metres*/
  printf("Enter your height in two decimal places: \n");
  /* Take the user input */
    scanf("%f", &height);
  /* Tell the user to input weight in kilograms*/
  printf("Enter your weight in two decimal places: \n");
  /* Take the user input */
    scanf("%f", &weight);
  /* Compute the BMI */
  BMI = weight / (height * height);

  /* Check BMI caterogy */
  if (BMI < 18.00)
  {
    printf("Your BMI is %.2fkg/m^2, and you're Underweight\n", BMI);
  }
  else if (BMI >= 18.00 && BMI <= 25.00)
  {
    printf("Your BMI is %.2fkg/m^2, and your weight is Normal\n", BMI);
  }
  else if (BMI >= 26.00 && BMI <= 29.00)
  {
    printf("Your BMI is %.2fkg/m^2, and you're Overweight\n", BMI);
  }
  else if (BMI >= 30.00)
  {
    if (BMI >= 30.00 && BMI <= 34.00)
    {
      printf("Your BMI is %.2fkg/m^2, and you're Class I Obese\n", BMI);
    }
    if (BMI >= 35.00 && BMI <= 39.00)
    {
      printf("Your BMI is %.2fkg/m^2, and you're Class II Obese\n", BMI);
    }
    if (BMI >= 40.00)
    {
      printf("Your BMI is %.2fkg/m^2, and you're Class III Obese\n", BMI);
    }
  }
  else
  {
    printf("Invalid input!");
  }

  return 0;
    
}