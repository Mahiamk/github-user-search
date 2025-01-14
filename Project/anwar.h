#include <stdio.h> 
#include <string.h>
#define MAX_FACTORY_PRODUCT 1000
typedef struct{
  int id;
  char name[30];
  char category[30];
  int quantity;
  float price;
} InventoryProduct;
void displayMenu();
void addProduct();
void updateProduct();
void searchProduct();
void listAllProducts();
void saveData();
void loadData();
