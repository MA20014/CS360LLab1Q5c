#include <iostream>
#include <iomanip>
using std::cout;

int main() {
    // Print strings centered using manipulators on separate lines
    cout << std::setw(20) << std::left << std::setfill(' ') << "Good Morning" << std::endl;
    cout << std::setw(20) << std::left << std::setfill(' ') << "Sarah" << std::endl;
    cout << std::setw(20) << std::left << std::setfill(' ') << "Sunshine!" << std::endl;

    return 0;
}
