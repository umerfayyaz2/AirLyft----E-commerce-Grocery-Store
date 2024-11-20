#include <iostream>
#include "product.h"
#include "order.h"
using namespace std;

int main()
{
    // Create some Product objects
    Product product1(101, "Milk", "Dairy", 2.99, 50);
    Product product2(102, "Bread", "Bakery", 1.99, 30);
    Product product3(103, "Eggs", "Poultry", 3.49, 20);

    // Create an Order object
    Order order1(1, "John Doe");

    // Add products to the order
    order1.add_product(product1);
    order1.add_product(product2);
    order1.add_product(product3);

    // Calculate the total cost
    order1.calculate_total();

    // Display the order details
    cout << "\nOrder Details (Before Status Update):" << endl;
    order1.display_order_details();

    // Update the order status
    order1.update_status("Shipped");

    // Display the order details after status update
    cout << "\nOrder Details (After Status Update):" << endl;
    order1.display_order_details();

    return 0;
}
