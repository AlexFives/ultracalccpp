#include "../../include/ContextToken.hpp"

void ContextToken::add(const ContextToken &other) {
    this->token += other.token;
}
