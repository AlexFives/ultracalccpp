#include "../include/Var.hpp"

Var Var::operator+(const Var &other) const {
    Var result = *this;
    result._symbols.insert(other._symbols.begin(), other._symbols.end());
    return result;
}

Var &Var::operator+=(const Var &other) {
    this->_symbols.insert(other._symbols.begin(), other._symbols.end());
    return *this;
}
