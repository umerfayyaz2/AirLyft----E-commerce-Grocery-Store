#include "customer.h"
#include <iostream>
using namespace std;

// Constructor
Customer::Customer(int id, const string &customer_name, const string &contact)
    : customer_id(id), name(customer_name), contact_info(contact) {}

// Place a new order
void Customer::place_order(const Order &new_order)
{
    order_history.push_back(new_order);
    cout << "Order ID: " << new_order.get_order_total()
         << " has been placed successfully for customer: " << name << endl;
}

// View the order history
void Customer::view_order_history() const
{
    if (order_history.empty())
    {
        cout << "No order history available for customer: " << name << endl;
        return;
    }
    cout << "Order History for Customer: " << name << endl;
    for (const auto &order : order_history)
    {
        order.display_order_details();
        cout << "-------------------" << endl;
    }
}

// Update contact information
void Customer::update_contact_info(const string &new_contact)
{
    contact_info = new_contact;
    cout << "Contact information updated successfully for customer: " << name << endl;
}

// Give feedback
void Customer::give_feedback(const string &feedback) const
{
    cout << "Feedback from customer: " << name << endl;
    cout << "\"" << feedback << "\"" << endl;
}

// Getter for customer ID
int Customer::get_customer_id() const
{
    return customer_id;
}

// Getter for customer name
string Customer::get_name() const
{
    return name;
}

// Getter for contact info
string Customer::get_contact_info() const
{
    return contact_info;
}
