#include <iostream>
#include <string>
#include <algorithm>

bool isPalindrome(int num) {
    std::string numStr = std::to_string(num);
    std::string reversed = numStr;
    std::reverse(reversed.begin(), reversed.end());
    return numStr == reversed;
}

int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    bool result = isPalindrome(number);

    std::cout << "The number " << number << " is a palindrome: " << std::boolalpha << result << std::endl;
    return 0;
}
