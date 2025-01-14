#include<stdio.h>
#include<string.h>
#define MAX_FACTORY_PRODUCT 1000

typedef struct{

  int id;
  char name[30];
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

void displayMenu() {
  printf("\nFactory Management System\n");
  printf("1. Add Product\n");
  printf("2. Update Product\n");
  printf("3. Search Product\n");
  printf("4. List All Products\n");
  printf("5. Exit\n");
}

void addProduct() {
  if (FactoryProductCount >= MAX_FACTORY_PRODUCT) {
    printf("Inventory is full!\n");
    return;
  }
  
  FactoryProduct product;
  printf("\nEnter product ID: \n");
  scanf("%d", &product.id);
  for (int i = 0; i < FactoryProductCount; i++) {
    if (inventory[i].id == product.id) {
      printf("Product ID already exists!\n");
      return;
    }
  }
  printf("Enter product name: \n");
  getchar();
  fgets(product.name, sizeof(product.name), stdin);
  product.name[strcspn(product.name, "\n")] = 0;
  printf("Enter quantity: \n");
  scanf("%d", &product.quantity);
  printf("Enter price: \n$");
  scanf("%f", &product.price);
  
  inventory[FactoryProductCount++] = product;
  printf("Product added successfully!\n");
}

void updateProduct() {
  int id;
  printf("Enter product ID to update: ");
  scanf("%d", &id);
  
  for (int i = 0; i < FactoryProductCount; i++) {
    if (inventory[i].id == id) {
      printf("Enter new quantity: ");
      scanf("%d", &inventory[i].quantity);
      printf("Enter new price: ");
      scanf("%f", &inventory[i].price);
      printf("Product updated successfully!\n");
      return;
    }
  }
  printf("Product not found!\n");
}

void searchProduct() {
  int id;
  printf("Enter product ID to search: ");
  scanf("%d", &id);
  
  for (int i = 0; i < FactoryProductCount; i++) {
    if (inventory[i].id == id) {
      printf("ID: %d\nName: %s\nQuantity: %d\nPrice: %.2f\n",
           inventory[i].id, inventory[i].name,
           inventory[i].quantity, inventory[i].price);
      return;
    }
  }
  printf("Product not found!\n");
}

void listAllProducts() {
  if (FactoryProductCount == 0) {
    printf("No products in the inventory!\n");
    return;
  }
  
  for (int i = 0; i < FactoryProductCount; i++) {
    printf("ID: %d\nName: %s\nQuantity: %d\nPrice: %.2f\n\n",
         inventory[i].id, inventory[i].name,
         inventory[i].quantity, inventory[i].price);
  }
}

void saveData() {
  FILE *fp = fopen("data.dat", "wb");
  if (fp == NULL) {
    printf("Error saving data!\n");
    return;
  }
  fwrite(inventory, sizeof(FactoryProduct), FactoryProductCount, fp);
  fclose(fp);
}

void loadData() {
  FILE *fp = fopen("data.dat", "rb");
  if (fp == NULL) {
    return;
  }
  FactoryProductCount = fread(inventory, sizeof(FactoryProduct), 
                 MAX_FACTORY_PRODUCT, fp);
  fclose(fp);
}


