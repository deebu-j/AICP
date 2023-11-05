#include <iostream>
#include <string>
using namespace std;

int main() {
    // Define computer component prices
    double casePrice, ramPrice, hddPrice;
    casePrice = 50.0;
    ramPrice = 40.0;
    hddPrice = 30.0;

    // Get user's choices for computer components
    int caseChoice, ramChoice, hddChoice;
    cout << "Choose a computer case (1-3):\n";
    cout << "1. Case 1 ($50.0)\n";
    cout << "2. Case 2 ($75.0)\n";
    cout << "3. Case 3 ($100.0)\n";
    cin >> caseChoice;
    cout << "Choose RAM (1-3):\n";
    cout << "1. 4GB RAM ($40.0)\n";
    cout << "2. 8GB RAM ($60.0)\n";
    cout << "3. 16GB RAM ($100.0)\n";
    cin >> ramChoice;
    cout << "Choose a hard disk drive (1-3):\n";
    cout << "1. 500GB HDD ($30.0)\n";
    cout << "2. 1TB HDD ($50.0)\n";
    cout << "3. 2TB HDD ($80.0)\n";
    cin >> hddChoice;

    // Calculate the total price of chosen components
    double totalPrice = casePrice + ramPrice + hddPrice;

    // Additional items
    char addMore;
    double additionalPrice = 0.0;

    do {
        cout << "Do you want to purchase additional items? (Y/N): ";
        cin >> addMore;
        if (addMore == 'Y' || addMore == 'y') {
            int additionalChoice;
            cout << "Choose an additional item:\n";
            cout << "1. Monitor ($150.0)\n";
            cout << "2. Keyboard ($20.0)\n";
            cin >> additionalChoice;

            if (additionalChoice == 1) {
                additionalPrice += 150.0;
            } else if (additionalChoice == 2) {
                additionalPrice += 20.0;
            } else {
                cout << "Invalid choice for additional item." << endl;
            }
        }
    } while (addMore == 'Y' || addMore == 'y');

    // Calculate the total price including additional items
    totalPrice += additionalPrice;

    // Display the final chosen items and the total price
    cout << "Chosen Computer Components:\n";
    cout << "Computer Case: $" << casePrice << endl;
    cout << "RAM: $" << ramPrice << endl;
    cout << "Hard Disk Drive: $" << hddPrice << endl;
    cout << "Additional Items Price: $" << additionalPrice << endl;
    cout << "Total Price: $" << totalPrice << endl;

    return 0;
}
