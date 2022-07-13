#pragma once

#include <string>
#include <utility>

class Context {
    std::string _ctx;
    size_t _iter = 0;

public:
    explicit Context(std::string other) : _ctx(std::move(other)) {}

    [[nodiscard]] size_t step() { return ++this->_iter; }

    [[nodiscard]] size_t iter() const { return this->_iter; }

    [[nodiscard]] size_t end() const { return this->_ctx.size(); }

    [[nodiscard]] std::string get_token(size_t pos = -1, size_t length = 1) const;
};