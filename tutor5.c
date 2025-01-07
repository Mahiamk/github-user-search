// #include<stdio.h>
// int main(){
//   // // int a=100;
//   // // int b=18;
//   // // int max;
//   // // int min;
//   // // // if (a>=b)
//   // // //   max=a;
//   // // // else
//   // // //   max=b;

//   // // // printf("The maximum value is: %d\n", max);
//   // // max=(a>=b)?a:b;
//   // // printf("The maximum value is: %d\n", max);
//   // char cGrade;
//   // printf("Enter your grade: ");
//   // scanf("%c", &cGrade);
//   // switch(cGrade){
//   //   case 'A': printf("The grade is A."); break;
//   //   case 'B': printf("The  grade is B.");break;
//   //   case 'C': printf("The grade is C.");break;
//   // }
//   int temp, stop;
//   printf("Enter your number: ");
//   scanf("%d", &temp);
//   // if (temp>30)
//   //   printf("Hot");
//   // else if(temp>20)
//   //   printf("Mild");
//   // else if(temp>10)
//   // printf("Cold");
//   // else
//   //   printf("Very cold");
//   // return 0;
//   // scanf("%d", &stop);
//   if (temp>30)
//     printf("Hot");
//   if (temp>20)
//     printf("Mild");
//   if (temp>10)
//     printf("COld");
  
//   return 0;
//     scanf("%d", &stop);
  


// }

#include<stdio.h>
// void display();
// void sum();
// void add(int a, int b, int c);
// int sumA(int a, int b);
void array();
int main(){
  // display();
  // sum();
  // int a, b, c;
  // add(a, b, c);
  // int y=sumA(5, 10);
  // printf("The sum is: %d\n", y);
  array();
  return 0;
}
// void display(){
//   printf("AIU\n");
// }
// void sum(){
//   int a=5;
//   int b=10;
//   int c=a+b;
//   printf("The sum is: %d\n", c);
// }
// void add(int a, int b, int c){
//   printf("Enter two numbers: \n");
//   scanf("%d %d", &a, &b);
//   c=a+b;
//   printf("The sum of two number is: %d\n", c);

// }
// int sumA(int a, int b){
//   int c=a+b;
//   return c;
// }
void array(){
  int sum;
  int mynum[]={10, 25, 50, 75, 100};
  int min=mynum[0];
  int length=sizeof(mynum)/sizeof(mynum[0]);
  for (int i=0; i<length; i++){
    printf("%d\n", mynum[i]);
    sum+=mynum[i];
    if (min > mynum[i])
      min=mynum[i];
    
  }
 printf("The summation of array: %d\n", sum);
 printf("The minimum is: %d\n", min);
  //get lowest value
  
}
