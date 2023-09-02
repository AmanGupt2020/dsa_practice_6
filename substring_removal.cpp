#include <iostream>
#include <string>
using namespace std;
// Function to remove all occurrences of 'AB' and 'BB' from the string
void removeOccurrences(string& str) {
    size_t i = 0, k = 0;

    while (i < str.length()) {
        if ((str[i] == 'B' && i > 0 && str[k - 1] == 'A') ||
            (str[i] == 'B' && i > 0 && str[k - 1] == 'B')) {
            --k, ++i;
        } else {
            str[k++] = str[i++];
        }
    }

    str.resize(k);
}

int main() {
    string str;
    cin>>str;

    removeOccurrences(str);

    
    cout << "The length of the remaining string is: " << str.length() <<endl;

    return 0;
}

