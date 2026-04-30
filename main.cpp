#include <iostream>
#include <iomanip>  // For setw() function
using namespace std;

int main() {
    int n;
    
    // Input from user
    cout << "Enter the value of n: ";
    cin >> n;
    
    // Display header
    cout << "\nMultiplication Table Grid (1 to " << n << ")" << endl;
    
    // Print the top header row
    cout << "    |";
    for(int i = 1; i <= n; i++) {
        cout << setw(5) << i;
    }
    cout << endl;
    
    // Print separator line
    cout << "----+";
    for(int i = 1; i <= n; i++) {
        cout << "-----";
    }
    cout << endl;
    
    // Print the multiplication table
    for(int i = 1; i <= n; i++) {
        // Print row label
        cout << setw(3) << i << " |";
        
        // Print products
        for(int j = 1; j <= n; j++) {
            cout << setw(5) << (i * j);
        }
        cout << endl;
    }
    
    return 0;
}
