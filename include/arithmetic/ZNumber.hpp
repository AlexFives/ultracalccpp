#pragma once

#include "NNumber.hpp"

class ZNumber {
    bool _sign; // true is "+", false is "-"
    NNumber n;

public:
    ZNumber() : _sign(true) {}

    ZNumber(bool sign, std::string s) : _sign(sign), n(std::move(s)) {}

    ZNumber(const ZNumber &other) = default;

    ZNumber(const NNumber &other) : _sign(true), n(other) {}

    ZNumber &operator=(const ZNumber &other) = default;

    ZNumber operator+() const;

    ZNumber operator-() const;

    ZNumber operator+(const ZNumber &other) const;

    ZNumber operator-(const ZNumber &other) const;

    std::string to_string() const;

    bool sign() const { return _sign; }
};