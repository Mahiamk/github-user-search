#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//  int sum(int x, int y){
//     int sum;
//     sum=x+y;
//     return x+y;
//   }
//   void test();
//   struct mystruct{
//     int mynum;
//     char mylet[100];
//   };
//   struct Student {
//     char name[50];
//     int age;
//   };
//   void updateAge(struct Student *s){
//     s->age += 1;
// }
int main(){
  // float temp;
  // int grade;
  // printf("Enter the grade: \n");
  // scanf("%d", grade);
  // switch(grade){
  //   case 91 ... 100: printf("A"); break;
  //   case 81 ... 90: printf("B"); break;
  //   default: printf("ntg\n");
  // }
//   int i=0; 
//   for (; i<4; i++){
//     printf("The num: %d\n", i);
//   }

//   while (i<4){
//     printf("The num: %d\n", i);
//     i++;
//   }
//   int n=0;
//   do{
//     if (n==2){
//       n++;
//       continue;
//     }
//     printf("The numb: %d\n", n);
//     n++;
//   }
//   while(n<5);
// for (int i=1; i<=12; i++){
//   for (int j=1; j<=15; j++){
//     printf("#");
//   }
//   printf("\n");
// }
// int i=1;
// while (i<=10){
//   int j=1;
//   while(j<=10){
//     printf("Anwar");
//     j++;
//   }
//   printf("\n");
//   i++;
// }
  // int x;
  // int sum=0;
  // printf("Enter integer: <EOF> to stop.\n");
  // while(scanf("%d",&x)!=EOF){
  // sum+=x;
  // }
  // printf("\nThe total is: %d\n", sum);
  // for (int i=1; i<=5; i++){
  //   for (int j =1; j<=(5-i); j++){
  //   printf(".");
  //   }
  //   for (int k=1; k<=i; k++){
  //   printf("%d",i);
  //   }
  //   printf("\n");
  // }
  // int x=10, y=11;
  // int result= sum(x,y);
  // printf("sum of %d and %d =%d ", x,y, result);
  // printf("Welcome to MyBank \n");
  // test();
  // printf("\n\nBye\n");
  // int num[]={23,44,5,5,44,23,23,23,67};
  // float sum=0;
  // float avg=0;
  // int maxCount = 0;
  // int mostRepeated = num[0];
  // int min=num[0];
  // int count = 0;
  // int length=sizeof(num)/sizeof(num[0]);
  // for (int i=0; i<length;i++){
  //   sum+=num[i];
  //   count = 0;
  //   for (int j = 0; j < length; j++) {
  //     if (num[i] == num[j]) {
  //       count++;
  //     }
  //   }
  //   if (count > maxCount) {
  //     maxCount = count;
  //     mostRepeated = num[i];
  //   }
  //   if (min>num[i]){
  //     min = num[i];
  //   }
  // }
  // printf("Most repeated number: %d (appears %d times)\n", mostRepeated, maxCount);
  // printf("Min is: %d\n", min);
  // avg=sum/length;
  //   printf("The summation of an array: %.0f\n", sum);
  //   printf("The average of an array: %.2f\n", avg);
  // char car[50]="Volvo";
  // char Anu[]=" That\'s my car, ";
  // char a[]="ana";
  // char b[]="manaa";
  // int length= sizeof(car)/sizeof(car[0]);
  // for (int i=0; i<length;i++){
  //   //printf("%c", car[i]);
  // }
  // printf("%s %s!\n", Anu, car);
  // printf("%zu\n", strlen(car));
  // printf("%d\n", length);
  // strcat(car,Anu);
  // printf("%s", car);
  // printf("%s", Anu);
  // strcpy(car, Anu);
  // printf("%s\n", car);
  // printf("%s\n", Anu);
  // printf("%d", strcmp(b, a));
  // printf("\n");
  // char ch;
  // FILE *fptr;
  // fptr=fopen("mydoc.txt", "r");
  // if (fptr==NULL){
  //   printf("File doesn't exist");
  //   exit(1);
  // }
  // printf("This is the content of the file:");
  // do{
  //   ch=fgetc(fptr);
  //   printf("%c", ch);
  // }
  // while(ch!=EOF);
  // fclose(fptr);
  // char ch[100];
  // double fahrenheit;
  // float celsius;
  // FILE *fptr;
  // fptr=fopen("mydoc.txt", "r");
  // if (fptr==NULL){
  //   printf("File doesnt exist!");
  //   return(1);
  // }
  // while(fscanf(fptr, "%f", &celsius) ==1){
  //   fahrenheit=1.8*celsius+32;
  //   printf("The fahrenheit degree is: %.2lf\n", fahrenheit);
  // }
  // fgets(ch, 100, fptr);
  // printf("%s\n", ch);
  // fclose(fptr);
  // struct mystruct s1;
  // s1.mynum=13;
  // strcpy(s1.mylet, "my name");
  // printf("%d\n", s1.mynum);
  // printf("%s\n", s1.mylet);




  // struct Student student1 = {"Alice"};
  // updateAge(&student1);  // Modifies student1's age
  // printf("%d",student1.age);
  // int var=23;
  // printf("%d\n", var);
  // printf("0x%p", &var);
  // int mynum[]={2,3,4,5,6};
  // int *ptr=mynum;
  // *mynum=90;
  // int i=0;
  // for(int i=0; i<5;i++){
  //   printf("%d\n", *(mynum+i));
  // }
  // while(i<5){
  //   printf("%d\n", *(mynum+i));
  //   i++;
  // }
  // i = 0;  // Reset i before the do-while loop
  // do{
  //   printf("%d\n", *(mynum+i));
  //   i++;
  // }while(i<5);
 
  // int i=1;
  // do{
  //   int j=1;
  //   do{
  //     printf("%d",j);
  //       j++;
  //     }while(j<=i);
  //     printf("\n");
  //     i++;       
  //   }
  // while(i<=6);
  // int num;
  // char let[100];
  // char ch;
  // // printf("Enter your name:");
  // FILE* fptr;
  // fptr=fopen("mydoc.txt","a+");
  // if (fptr==NULL){
  //   printf("The file doesnt exist");
  //   exit(1);
  // }
  // rewind(fptr);
  // while((ch=fgetc(fptr))!=EOF){
  //   printf("%c",ch);
  // }
  // fclose(fptr);
  // int mark;
  // char cgrade;
  // printf("Enter mark: ");
  // scanf("%d", &mark);
  // if (mark>=90){
  //   cgrade='A';
  // }else if(mark>=80){
  //   cgrade='B';
  // }else{
  //   cgrade='C';
  // }
  // printf("Your grade is:%c\n", cgrade);
  int mult;
  for (int i=1; i<=6;i++){
    for (int j=1;j<=6;j++){
      mult=i*j;
      printf("%d*%d=%d\n",i,j,mult);
    }
  }
    
  return 0;
}
// void test(){
//   printf("Enter ID\n");
//   printf("------------");
// }