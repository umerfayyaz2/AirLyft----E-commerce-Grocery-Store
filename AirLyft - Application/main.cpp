#include <iostream>
#include "product.h"
#include "order.h"
#include "customer.h"
using namespace std;

int main()
{
    // Create some Product objects
    Product product1(101, "Milk", "Dairy", 2.99, 50);
    Product product2(102, "Bread", "Bakery", 1.99, 30);
    Product product3(103, "Eggs", "Poultry", 3.49, 20);

    // Create an Order object
    Order order1(1, "John Doe");
    order1.add_product(product1);
    order1.add_product(product2);
    order1.calculate_total();

    // Create a Customer object
    Customer customer1(1001, "John Doe", "john.doe@example.com");

    // Place an order
    customer1.place_order(order1);

    // View order history
    cout << "\nViewing Order History:" << endl;
    customer1.view_order_history();

    // Update contact information
    customer1.update_contact_info("john.doe@newmail.com");

    // Provide feedback
    cout << "\nProviding Feedback:" << endl;
    customer1.give_feedback("Great experience! Loved the quick delivery.");

    return 0;
}
