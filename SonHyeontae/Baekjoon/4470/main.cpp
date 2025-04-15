#include <iostream>
#include <string>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    std::vector<std::string> arr;
    std::string str;
    std::cin.ignore();

    for (int i = 0; i < n; i++) {
        std::getline(std::cin, str);
        arr.push_back(str);
    }

    for (int i = 0; i < n; i++) {
        std::cout << i + 1 << ". " << arr[i] << '\n';
    }

    return 0;
}