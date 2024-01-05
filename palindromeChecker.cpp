#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool isPalindrome(int num) {
    string numStr = to_string(num);
    string reversed = numStr;
    reverse(reversed.begin(), reversed.end());
    return numStr == reversed;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    bool result = isPalindrome(number);

    cout << "The number " << number << " is a palindrome: " << boolalpha << result << endl;
    return 0;
}
