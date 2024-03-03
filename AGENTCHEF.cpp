#include <iostream>
#include <cmath> // Include cmath for ceil function
using namespace std;

int main() {
    int t, x, total;
    float earn;
    cin >> t;
    while (t--) {
        cin >> x;
        earn = (x * 20.0) / 100.0;
        total = ceil(100 / earn); // Use ceil to round up to the nearest whole number of insurances needed
        cout << total << endl;
    }
    return 0;
}
