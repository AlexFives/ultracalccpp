#include "arithmetic/NNumber.hpp"

#include "../exceptions.hpp"

NNumber NNumber::operator+(const NNumber &other) const {
    auto this_iter = this->number.rbegin();
    auto other_iter = other.number.rbegin();
    int tmp = 0;
    std::string result;
    while (this_iter != this->number.rend() and other_iter != other.number.rend()) {
        int a = *this_iter++ - '0';
        int b = *other_iter++ - '0';
        int sum = a + b + tmp;
        result = std::to_string(sum % 10) + result;
        tmp = sum / 10;
    }

    while (this_iter != this->number.rend()) {
        int a = *this_iter++ - '0';
        int sum = a + tmp;
        result = std::to_string(sum % 10) + result;
        tmp = sum / 10;
    }

    while (other_iter != other.number.rend()) {
        int b = *other_iter++ - '0';
        int sum = b + tmp;
        result = std::to_string(sum % 10) + result;
        tmp = sum / 10;
    }

    if (tmp)
        result = std::to_string(tmp) + result;

    return {result};
}

NNumber NNumber::operator-(const NNumber &other) const {
    if (*this < other)
        throw UnsupportedOperationException();
    auto this_iter = this->number.rbegin();
    auto other_iter = other.number.rbegin();
    bool is_less = false;
    std::string result;
    while (other_iter != other.number.rend()) {
        int a = *this_iter++ - '0';
        int b = *other_iter++ - '0';
        if (is_less) {
            if (a == 0)
                a = 9;
            else
                a--;
            is_less = false;
        }
        if (a < b) {
            is_less = true;
            a += 10;
        }
        auto delta = a - b;
        result = std::to_string(delta) + result;
    }

    while (this_iter != this->number.rend()) {
        int a = *this_iter++ - '0';
        if (is_less) {
            if (a == 0) {
                a = 9;
                is_less = true;
            } else {
                is_less = false;
                a--;
            }
        }
        result = std::to_string(a) + result;
    }

    int null_counter = 0;
    for (auto it = result.begin(); it != result.end() - 1; it++) {
        if (*it != '0')
            break;
        null_counter++;
    }

    return {{result.begin() + null_counter, result.end()}};
}

bool NNumber::operator<(const NNumber &other) const {
    if (this->number.size() < other.number.size())
        return true;
    if (this->number.size() > other.number.size())
        return false;
    auto this_iter = this->number.begin();
    auto other_iter = other.number.begin();
    while (this_iter != this->number.end()) {
        if (*this_iter != *other_iter) {
            if (*this_iter++ > *other_iter++)
                return false;
            return true;
        }
        this_iter++;
    }
}
