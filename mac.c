// #include <stdio.h>

// int main() {
//     int num;

//     printf("Hello user, Enter a number: ");
//     scanf("%d", &num);

//     switch(num) {
//         case 1:
//             printf("UNITED STATES");
//             break;
//         case 2:
//             printf("SPAIN");
//             break;
//         case 3:
//             printf("INDIA");
//             break;
//         default:
//             printf("WRONG ENTRY");
//     }
// }
#include <stdio.h>
int main() {
  // char firstname[30];
  // char lastname[30];

  // printf("Enter your first name and last name: \n");
  // scanf("%s %s", firstname, lastname);
  // printf("%s %s", lastname, firstname);
  // int length;
  // int width;
  // int perimeter;
  // printf("Enter the length: \n");
  // scanf("%d", &length);
  // printf("Enter the width: ");
  // scanf("%d", &width);
  // perimeter=2*(length+width);

  // printf("%d", perimeter);
  // return 0;
  // double dollar;
  // double ringgit;
  // printf("Enter the amount of dollar: \n");
  // scanf("%lf", &dollar);
  // ringgit=4.20*dollar;
  // printf("%.3lf", ringgit);
  //CALCULATE AN AVERAGE SCORE
  // float maths, english, physics, average;
  // printf("Enter your score: \n");
  // scanf("%f %f %f", &maths, &physics, &english);
  // average=(maths+physics+english)/3;
  // printf("%f", average);
  //CASHIER TOTAL PAYMENT CALCULATER
  // char item[30];
  // float price;
  // int quantity;
  // float totalprice;
  // printf("Enter item name: \n");
  // scanf("%s", item);
  // printf("Enter the price: \n");
  // scanf("%f", &price);
  // printf("Enter the quantity: \n");
  // scanf("%d", &quantity);
  // totalprice=price*quantity;
  // printf("The total price of %s is %f", item, totalprice);
  //ATM MACHINE WITHDRAWAL DISPLAYER
  // float currentbalance;
  // float originalbalance;
  // float withdrawalamount;
  // printf("Enter your Original balance: \n");
  // scanf("%f", &originalbalance);
  // printf("Enter withdrawal amount: \n");
  // scanf("%f", &withdrawalamount);
  // currentbalance=originalbalance-withdrawalamount;
  // printf("Current balance: %f\n", currentbalance);
  // printf("The total account before withdrawal is %f\nThe amount of withdrawal %f\nThe current balance is %f", originalbalance, withdrawalamount, currentbalance);

  // int box;
  // printf("Enter number: \n");
  // scanf("%d", &box);
  // switch (box)
  // {
  // case 1:
  //   printf("Behasa melayu");
  //   break;
  // case 2:
  //   printf("English");
  //   break;
  // case 3:
  //   printf("Amharic");
  // default:
  //   printf("Wrong number");
  //   break;
  // }
  int i,result;
  // do{
  //   printf("%d\n", i);
  //   ++i;
  // }
  // while(i<3);
  for (int i=1; i<10; i++){
    result=i*3;
    printf("%d*3= %d\n", i, result);

  }
  printf("\n");
  
  return 0;
}
