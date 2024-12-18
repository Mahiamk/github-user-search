#include<stdio.h>
int main(){
	int num=100;					//valid variables
	float price=12.54;				//valid variables
  char grade=’A’;					//valid variables
  char 2ndLetter=’B’;				//invalid variables
  char int=’A’;					//invalid variables
  double interest rate =0.05;			//invalid variables
  printf(“The given Number is: %d\n”, num);
		//The output is 100
  printf(“The price is: %.2f\n”, price);
		//The output is 12.54

  printf(“Your grade is: %c\n”, grade);
		//The output is A


  return 0;
}

