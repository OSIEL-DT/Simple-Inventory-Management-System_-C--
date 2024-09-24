#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>
#include <string>

class Product {
private:
    int id;
    std::string name;
    int quantity;
    double price;

public:
    // Constructor
    Product(int id, const std::string &name, int quantity, double price);

    // Getters and setters
    int getId() const;
    std::string getName() const;
    int getQuantity() const;
    double getPrice() const;

    void setQuantity(int quantity);
    void setPrice(double price);

    // Display product info
    void displayProduct() const;
};

#endif
