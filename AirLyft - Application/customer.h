#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
#include <vector>
#include "order.h"
using namespace std;

class Customer
{
private:
    int customer_id;             // Unique identifier for the customer
    string name;                 // Name of the customer
    string contact_info;         // Email or phone number
    vector<Order> order_history; // List of orders placed by the customer

public:
    // Constructor
    Customer(int id, const string &customer_name, const string &contact);

    // Place a new order
    void place_order(const Order &new_order);

    // View the order history
    void view_order_history() const;

    // Update contact information
    void update_contact_info(const string &new_contact);

    // Give feedback (currently displays a message for simplicity)
    void give_feedback(const string &feedback) const;

    // Getter for customer ID (optional, useful for validation)
    int get_customer_id() const;

    // Getter for customer name
    string get_name() const;

    // Getter for contact info
    string get_contact_info() const;
};

#endif // CUSTOMER_H
