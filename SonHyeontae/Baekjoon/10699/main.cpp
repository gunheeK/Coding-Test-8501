#include <iostream>
#include <chrono>
#include <iomanip>
#include <ctime>

int main() {
    auto now = std::chrono::system_clock::now();
    std::time_t utc_time = std::chrono::system_clock::to_time_t(now);
    std::time_t seoul_time = utc_time + 9 * 60 * 60;
    std::cout << std::put_time(std::localtime(&seoul_time), "%Y-%m-%d");

    return 0;
}