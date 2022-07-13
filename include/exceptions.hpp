#pragma once

#include <exception>

struct TokenNotFound : std::exception {
    const char *what() const noexcept override { return "Token wasn't found!"; }
};