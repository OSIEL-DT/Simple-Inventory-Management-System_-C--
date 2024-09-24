#include <iostream>
#include "inventory.h"

void showMenu() {
    std::cout << "\nInventory Management System\n";
    std::cout << "1. Add Product\n";
    std::cout << "2. Update Product\n";
    std::cout << "3. Delete Product\n";
    std::cout << "4. Display Inventory\n";
    std::cout << "5. Exit\n";
}

int main() {
    Inventory inventory;
    int choice, id, quantity;
    double price;
    std::string name;

    while (true) {
        showMenu();
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:  // Add product
                std::cout << "Enter Product ID: ";
                std::cin >> id;
                std::cout << "Enter Product Name: ";
                std::cin.ignore();
                std::getline(std::cin, name);
                std::cout << "Enter Quantity: ";
                std::cin >> quantity;
                std::cout << "Enter Price: ";
                std::cin >> price;
                inventory.addProduct(Product(id, name, quantity, price));
                std::cout << "Product added successfully!" << std::endl;
                break;

            case 2:  // Update product
                std::cout << "Enter Product ID to update: ";
                std::cin >> id;
                std::cout << "Enter new Quantity: ";
                std::cin >> quantity;
                std::cout << "Enter new Price: ";
                std::cin >> price;
                inventory.updateProduct(id, quantity, price);
                break;

            case 3:  // Delete product
                std::cout << "Enter Product ID to delete: ";
                std::cin >> id;
                inventory.deleteProduct(id);
                break;

            case 4:  // Display inventory
                inventory.displayInventory();
                break;

            case 5:  // Exit
                std::cout << "Exiting program..." << std::endl;
                return 0;

            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
        }
    }

    return 0;
}
