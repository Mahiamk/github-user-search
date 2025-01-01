#include<stdio.h>
#include<string.h>
#define MAX_FACTORY_PRODUCT 1000

typedef struct{

  int id;
  char anme[30];
  int quantity;
  float price;
} FactoryProduct;

FactoryProduct inventory[MAX_FACTORY_PRODUCT];
int FactoryProductCount=0;
void displayMenu();
void addProduct();
void updateProduct();
void searchProduct();
void listAllProducts();
void saveData();
void loadData();
int main(){
  int choice;
  loadData();
  do {
    displayMenu();
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
      addProduct();
      break;
    case 2:
      updateProduct();
      break;
    case 3:
      searchProduct();
      break;
    case 4:
      listAllProducts();
      break;
    case 5:
      saveData();
      printf("Exiting program...\n");
      break;
    
    default:
      printf("Invalid choice. Please try again.\n");
    }
  }while (choice !=5);
  return 0;
}