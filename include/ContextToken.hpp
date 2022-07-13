#pragma once

#include <string>

class ContextToken {
    std::string token;

public:
    ContextToken() = default;

    ContextToken(std::string token) : token(std::move(token)) {}

    ContextToken(const ContextToken &other) = default;

    void add(const ContextToken &other);

    std::string getToken() const { return this->token; }

    operator bool() const { return !this->token.empty(); }
};
