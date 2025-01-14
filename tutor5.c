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
#include<string.h>
// void display();
// void sum();
// void add(int a, int b, int c);
// int sumA(int a, int b);
//void array();
//void exerciseOne();
void exerciseTwo();
int main(){

  // display();
  // sum();
  // int a, b, c;
  // add(a, b, c);
  // int y=sumA(5, 10);
  // printf("The sum is: %d\n", y);
  //array();
  //exerciseOne();
  exerciseTwo();
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
// void array(){
//   int sum;
//   int mynum[]={10, 25, 50, 75, 100};
//   int min=mynum[0];
//   int length=sizeof(mynum)/sizeof(mynum[0]);
//   for (int i=0; i<length; i++){
//     printf("%d\n", mynum[i]);
//     sum+=mynum[i];
//     if (min > mynum[i])
//       min=mynum[i];
    
//   }
//  printf("The summation of array: %d\n", sum);
//  printf("The minimum is: %d\n", min);
//   //get lowest value
  
// }
// void exerciseOne(){
//   char message[]="Laravel is a web application framework with expressive, elegant syntax. We’ve already laid the foundation — freeing you to create without sweating the small things.";
//   printf("The message is: %s\n", message);
//   int size=sizeof(message)/sizeof(message[0]);
//   printf("The size of the message is: %d\n", size);
//   printf("%lu\n", strlen(message));
//   for (int i=0; i<size; i++){
//     printf("%d", message[i]);
//   }
 
// }
void exerciseTwo(){
  char msg1[100]="Baharudin";
  char msg2[100]=" Osman";
  strcat(msg1, msg2); //concatenate and the value of msg1 will be Baharudin Osman and retain the value of msg2
  printf("The message is: %s\n", msg1);
  printf("%s\n", msg2);
  strcpy(msg2, msg1);
  printf("The message is: %s\n", msg2);
  printf("%d\n", strcmp(msg1, msg2));
  printf("%d\n", strcmp(msg1, msg2));
  char ms1[100]="Hello";
  char ms2[100]="Hello";
  char ms3[100]="Hell";
  printf("%d\n", strcmp(ms1, ms2));
  printf("%d\n", strcmp(ms1, ms3));

}
