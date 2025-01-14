#include<stdio.h>
#include<string.h>
#define MAX_FACTORY_PRODUCT 1000
typedef struct{
  int id;
  char name[30];
  char category[30];
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
      printf("Changes have been saved...\n");
      break;
    
    default:
      printf("Invalid choice. Please try again.\n");
    }
  }while (choice !=5);
  printf("Thank you for using the Inventory Management System!\n");
  return 0;
}

void displayMenu() {
  printf("\n===== Inventory Management System =====\n");
  printf("--------------------------------------------------\n");
  printf("| 1 | Add Product                                |\n");
  printf("|---|--------------------------------------------|\n");
  printf("| 2 | Update Product                             |\n");
  printf("|---|--------------------------------------------|\n");
  printf("| 3 | Search Product                             |\n");
  printf("|---|--------------------------------------------|\n");
  printf("| 4 | List All Products                          |\n");
  printf("|---|--------------------------------------------|\n");
  printf("| 5 | Save the changes and exit the program      |\n");
  printf("--------------------------------------------------\n");
}


void addProduct() {
  if (FactoryProductCount >= MAX_FACTORY_PRODUCT) {
    printf("Inventory is full!\n");
    return;
  }
  
  FactoryProduct product;
  printf("Enter product ID: ");
  scanf("%04d", &product.id);
  printf("Enter name: ");
  getchar();
  fgets(product.name, sizeof(product.name), stdin);
  product.name[strcspn(product.name, "\n")] = 0;
  printf("Enter category: \n");
  fgets(product.category, sizeof(product.category), stdin);
  product.category[strcspn(product.category, "\n")] = 0;
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
  scanf("%04d", &id);
  
  for (int i = 0; i < FactoryProductCount; i++) {
    if (inventory[i].id == id) {
      printf("Enter new name: ");
      getchar();
      fgets(inventory[i].name, sizeof(inventory[i].name), stdin);
      inventory[i].name[strcspn(inventory[i].name, "\n")] = 0;
      printf("Enter new category: ");
      fgets(inventory[i].category, sizeof(inventory[i].category), stdin);
      inventory[i].category[strcspn(inventory[i].category, "\n")] = 0;
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
  scanf("%04d", &id);
  
  for (int i = 0; i < FactoryProductCount; i++) {
    if (inventory[i].id == id) {
      printf("Product ID: %04d\n", inventory[i].id);
      printf("Name: %s\n", inventory[i].name);
      printf("Category: %s\n", inventory[i].category);
      printf("Quantity: %d\n", inventory[i].quantity);
      printf("Price: $%.2f\n", inventory[i].price);
      return;
    }
  }
  printf("Product not found!\n");
}

void listAllProducts() {
  if (FactoryProductCount == 0) {
    printf("Inventory is empty!\n");
    return;
  }
  
  for (int i = 0; i < FactoryProductCount; i++) {
    printf("Product ID: %04d\n", inventory[i].id);
    printf("Name: %s\n", inventory[i].name);
    printf("Category: %s\n", inventory[i].category);
    printf("Quantity: %d\n", inventory[i].quantity);
    printf("Price: $%.2f\n", inventory[i].price);
    printf("--------------------------------------------------\n");
  }
}

void saveData(){
  FILE *fp;
  fp = fopen("inventory.txt", "w");
  if (fp == NULL){
    printf("Error saving data to file!\n");
    return;
  }
  for (int i = 0; i < FactoryProductCount; i++){
    fprintf(fp, "%04d\n", inventory[i].id);
    fprintf(fp, "%s\n", inventory[i].name);
    fprintf(fp, "%s\n", inventory[i].category);
    fprintf(fp, "%d\n", inventory[i].quantity);
    fprintf(fp, "%.2f\n", inventory[i].price);
  }
  fclose(fp);
}

void loadData(){
  FILE *fp;
  fp = fopen("inventory.txt", "r");
  if (fp == NULL){
    return;
  }
  while (fscanf(fp, "%04d", &inventory[FactoryProductCount].id) != EOF){
    fgetc(fp);
    fgets(inventory[FactoryProductCount].name, sizeof(inventory[FactoryProductCount].name), fp);
    inventory[FactoryProductCount].name[strcspn(inventory[FactoryProductCount].name, "\n")] = 0;
    fgets(inventory[FactoryProductCount].category, sizeof(inventory[FactoryProductCount].category), fp);
    inventory[FactoryProductCount].category[strcspn(inventory[FactoryProductCount].category, "\n")] = 0;
    fscanf(fp, "%d", &inventory[FactoryProductCount].quantity);
    fscanf(fp, "%f", &inventory[FactoryProductCount].price);
    FactoryProductCount++;
  }
  fclose(fp);
} 
//   FILE *fp = fopen("FactoryManagementSystemData.dat", "rb");



