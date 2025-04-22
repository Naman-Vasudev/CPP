#include <iostream>
using namespace std;

int main() {
    int cost_price, selling_price;

    // Input cost price and selling price
    cout << "Enter Cost Price (CP): ";
    cin >> cost_price;
    
    cout << "Enter Selling Price (SP): ";
    cin >> selling_price;

    // Check profit, loss, or no profit no loss
    if (cost_price > selling_price) {
        cout << "You have a loss of " << cost_price - selling_price << "\n";
    } 
    else if (cost_price < selling_price) {
        cout << "You have a profit of " << selling_price - cost_price << "\n";
    } 
    else {
        cout << "No profit, No loss.\n";
    }

    return 0;
}
