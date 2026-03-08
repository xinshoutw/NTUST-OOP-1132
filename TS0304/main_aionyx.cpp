////////////////////////////////////////////////////////////////////////////////
/// @brief Calculate math puzzle.
///
/// @file main_aionyx.cpp
/// @author 黃仕璿 <me@aionyx.me>
/// @date 2025/03/09
/// @version 0.0.1
////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <cmath>

int main() {
    int input;
    
    while (std::cin >> input) {
        int decade = (input - 1900) / 10;

        double k = 4 * pow(2, decade);

        double sum = 0;
        int n = 0;

        while (true) {
            ++n;
            sum += log2(n);
            if (sum > k)
                break;
        }

        std::cout << n - 1 <<'\n';
    }
}