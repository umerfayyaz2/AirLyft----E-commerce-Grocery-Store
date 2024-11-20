#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>
using namespace std;

class Product
{
private:
    int product_id;     // Unique identifier for the product
    string name;        // Name of the product
    string category;    // Category to which the product belongs
    double price;       // Price of the product
    int stock_quantity; // Amount of product available in stock

public:
    // Constructor
    Product(int id, const string &product_name, const string &product_category, double product_price, int stock);

    // Getter for price
    double get_price() const;

    // Method to update stock
    void update_stock(int quantity_change);

    // Method to check availability
    bool check_availability() const;

    // Method to display product details
    void display_details() const;

    // Getter for product name (optional, useful for display or debugging)
    string get_name() const;

    // Getter for stock quantity (optional, useful for display or debugging)
    int get_stock_quantity() const;
};

#endif // PRODUCT_H
