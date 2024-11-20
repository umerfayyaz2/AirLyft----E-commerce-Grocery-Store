#ifndef ORDER_H
#define ORDER_H

#include <string>
#include <vector>
#include "product.h"
using namespace std;

class Order
{
private:
    int order_id;                 // Unique identifier for the order
    string customer;              // Name or identifier of the customer (can later link to a Customer class)
    vector<Product> product_list; // List of products in the order
    double order_total;           // Total cost of the order
    string delivery_status;       // Current status of the order (e.g., "Pending", "Shipped", "Delivered")

public:
    // Constructor
    Order(int id, const string &customer_name);

    // Add product to the order
    void add_product(const Product &product);

    // Calculate the total cost of the order
    void calculate_total();

    // Update the delivery status of the order
    void update_status(const string &status);

    // Display the details of the order
    void display_order_details() const;

    // Getter for order total (optional, useful for validation or testing)
    double get_order_total() const;

    // Getter for delivery status (optional)
    string get_delivery_status() const;
};

#endif // ORDER_H
