#pragma once

#include <string>

class NNumber {
    std::string number;

public:
    NNumber() : number("0") {}

    NNumber(std::string x) : number(std::move(x)) {} // TODO lstrip nulls

    NNumber(const NNumber &other) = default;

    NNumber(int n) : number(std::to_string(n)) {}

    NNumber &operator=(const NNumber &other) = default;

    NNumber operator+(const NNumber &other) const;

    NNumber operator-(const NNumber &other) const;

    bool operator<(const NNumber &other) const;

    std::string to_string() const { return this->number; }
};

