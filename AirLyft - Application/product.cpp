#include "product.h"
#include <iostream>
using namespace std;

// Constructor
Product::Product(int id, const string &product_name, const string &product_category, double product_price, int stock)
    : product_id(id), name(product_name), category(product_category), price(product_price), stock_quantity(stock) {}

// Getter for price
double Product::get_price() const
{
    return price;
}

// Method to update stock
void Product::update_stock(int quantity_change)
{
    stock_quantity += quantity_change; // Add the change to stock quantity
    if (stock_quantity < 0)
    {
        stock_quantity = 0; // Ensure stock doesn't go below zero
    }
}

// Method to check availability
bool Product::check_availability() const
{
    return stock_quantity > 0; // True if stock is available, false otherwise
}

// Method to display product details
void Product::display_details() const
{
    cout << "Product ID: " << product_id << endl;
    cout << "Name: " << name << endl;
    cout << "Category: " << category << endl;
    cout << "Price: $" << price << endl;
    cout << "Stock Quantity: " << stock_quantity << endl;
}

// Getter for product name (optional)
string Product::get_name() const
{
    return name;
}

// Getter for stock quantity (optional)
int Product::get_stock_quantity() const
{
    return stock_quantity;
}
