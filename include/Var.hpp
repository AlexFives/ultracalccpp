#pragma once

#include <string>
#include <set>
#include <utility>

class Var {
    std::set<std::string> _symbols;

public:
    Var() = default;

    Var(const Var &other) = default;

    explicit Var(std::set<std::string> symbols) : _symbols(std::move(symbols)) {}

    Var(std::initializer_list<std::string> &&init_list) : _symbols(init_list) {}

    Var &operator=(const Var &other) = default;

    Var operator+(const Var &other) const;

    Var &operator+=(const Var &other);

    [[nodiscard]] bool contains(const std::string &x) const { return this->_symbols.count(x); }

    [[nodiscard]] bool contains(const std::string &&x) const { return this->_symbols.count(x); }
};