#include <iostream>
#include "product.h"
using namespace std;

int main()
{
    // Create a Product object
    Product product(101, "Milk", "Dairy", 2.99, 50);

    // Display product details
    cout << "Initial Product Details:" << endl;
    product.display_details();

    // Check availability
    cout << "\nChecking availability: " << (product.check_availability() ? "In Stock" : "Out of Stock") << endl;

    // Update stock (simulate sale of 10 units)
    cout << "\nSelling 10 units..." << endl;
    product.update_stock(-10);
    product.display_details();

    // Update stock (restock 20 units)
    cout << "\nRestocking 20 units..." << endl;
    product.update_stock(20);
    product.display_details();

    // Check availability again
    cout << "\nChecking availability: " << (product.check_availability() ? "In Stock" : "Out of Stock") << endl;

    return 0;
}
