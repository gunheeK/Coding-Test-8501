#include <iostream>
#include <chrono>
#include <iomanip>
#include <ctime>

int main() {
    auto now = std::chrono::system_clock::now();
    std::time_t utc_time = std::chrono::system_clock::to_time_t(now);
    std::cout << std::put_time(std::localtime(&utc_time), "%Y\n%m\n%d");

    return 0;
}
