#include <iostream>
#include <string>
using namespace std;

int main() {
    // Arrays to store item descriptions and prices
    string components[] = { "Computer Case", "RAM", "Hard Disk Drive" };
    double componentPrices[] = { 0.0, 0.0, 0.0 };
    
    // Variables to store user choices
    int choice;

    // Get user choices for computer components
    for (int i = 0; i < 3; i++) {
        cout << "Choose a " << components[i] << " (1-3):" << endl;
        cout << "1. Option 1 ($50.0)" << endl;
        cout << "2. Option 2 ($75.0)" << endl;
        cout << "3. Option 3 ($100.0)" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch (i) {
            case 0:
                componentPrices[i] = (choice == 1) ? 50.0 : (choice == 2) ? 75.0 : 100.0;
                break;
            case 1:
                componentPrices[i] = (choice == 1) ? 40.0 : (choice == 2) ? 60.0 : 100.0;
                break;
            case 2:
                componentPrices[i] = (choice == 1) ? 30.0 : (choice == 2) ? 50.0 : 80.0;
                break;
        }
    }

    // Calculate the initial total price
    double totalPrice = componentPrices[0] + componentPrices[1] + componentPrices[2];

    // Allow the customer to choose additional items
    char addMore;
    int additionalItemsCount = 0;
    double additionalPrice = 0.0;

    do {
        cout << "Do you want to purchase additional items? (Y/N): ";
        cin >> addMore;
        if (addMore == 'Y' || addMore == 'y') {
            cout << "Choose an additional item:" << endl;
            cout << "1. Monitor ($150.0)" << endl;
            cout << "2. Keyboard ($20.0)" << endl;
            cout << "Enter your choice (1/2): ";
            cin >> choice;

            if (choice == 1) {
                additionalPrice += 150.0;
            } else if (choice == 2) {
                additionalPrice += 20.0;
            } else {
                cout << "Invalid choice for additional item." << endl;
            }

            additionalItemsCount++;
        }
    } while (addMore == 'Y' || addMore == 'y');

    // Calculate the total price including additional items
    totalPrice += additionalPrice;

    // Display the final chosen items, the number of additional items, and the final total price
    cout << "Chosen Computer Components:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << components[i] << ": $" << componentPrices[i] << endl;
    }
    cout << "Additional Items Count: " << additionalItemsCount << endl;
    cout << "Final Total Price: $" << totalPrice << endl;

    // Apply discounts based on the number of additional items
    double discount = 0.0;
    if (additionalItemsCount == 1) {
        discount = 0.05 * totalPrice;
    } else if (additionalItemsCount >= 2) {
        discount = 0.10 * totalPrice;
    }

    // Calculate the new total price after the discount
    totalPrice -= discount;

    // Display the amount saved and the new total price after the discount
    cout << "You saved: $" << discount << endl;
    cout << "New Total Price after Discount: $" << totalPrice << endl;

    return 0;
}
