#include "arithmetic/ZNumber.hpp"

ZNumber ZNumber::operator+() const {
    return *this;
}

ZNumber ZNumber::operator-() const {
    auto result = *this;
    result._sign = !result._sign;
    return result;
}

ZNumber ZNumber::operator+(const ZNumber &other) const {
    if (this->_sign == other._sign) {
        auto res = this->n + other.n;
        auto result = ZNumber(res);
        result._sign = this->_sign;
        return result;
    }
    if (this->n < other.n) {
        auto res = other.n - this->n;
        auto result = ZNumber(res);
        result._sign = other._sign;
        return result;
    }
    auto res = this->n - other.n;
    auto result = ZNumber(res);
    result._sign = this->_sign;
    return result;
}

ZNumber ZNumber::operator-(const ZNumber &other) const {
    return *this + -other;
}

std::string ZNumber::to_string() const {
    std::string result = (this->_sign ? "+" : "-") + this->n.to_string();
    return result;
}
