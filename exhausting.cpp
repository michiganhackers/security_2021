#include <iostream>
#include <cstdlib>
#include <vector>

std::string unscramble(const std::string & input) {
    std::vector<char> chars(input.begin(), input.end());

    size_t n = chars.size();
    std::vector<char> temp(n);

    for (size_t i = 0; i < chars.size(); ++i) {
        temp.at((2 * i + 1) % (n + 1)) = chars.at(i);
    }

    return std::string(temp.rbegin(), temp.rend());
}

int sum_chars(const std::string & input) {
    int sum = 0;
    for (const char & c : input) {
        sum += static_cast<int>(c);
    }
    return sum;
}

int main(int argc, const char * argv[]) {
    std::cout << "Please enter a valid key:\n";

    std::string input;

    while (std::cin >> input) {
        if (sum_chars(input) == 998) {
            const char * scrambled_flag = "MnouYeduFo";
            std::cout << "Correct! The flag is: " << unscramble(scrambled_flag) << '\n';
            break;
        } else {
            std::cout << "Nope!" << '\n';
        }
    }

    return 0;
}
