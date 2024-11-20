#include "order.h"
#include <iostream>
using namespace std;

// Constructor
Order::Order(int id, const string &customer_name)
    : order_id(id), customer(customer_name), order_total(0.0), delivery_status("Pending") {}

// Add a product to the order
void Order::add_product(const Product &product)
{
    product_list.push_back(product);
}

// Calculate the total cost of the order
void Order::calculate_total()
{
    order_total = 0.0; // Reset total
    for (const auto &product : product_list)
    {
        order_total += product.get_price(); // Add product price to the total
    }
}

// Update the delivery status
void Order::update_status(const string &status)
{
    delivery_status = status; // Update the delivery status
}

// Display the order details
void Order::display_order_details() const
{
    cout << "Order ID: " << order_id << endl;
    cout << "Customer: " << customer << endl;
    cout << "Delivery Status: " << delivery_status << endl;
    cout << "Products in Order:" << endl;
    for (const auto &product : product_list)
    {
        product.display_details();
        cout << "-------------------" << endl;
    }
    cout << "Order Total: $" << order_total << endl;
}

// Getter for order total
double Order::get_order_total() const
{
    return order_total;
}

// Getter for delivery status
string Order::get_delivery_status() const
{
    return delivery_status;
}
