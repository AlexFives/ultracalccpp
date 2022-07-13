#include "../include/Context.hpp"

std::string Context::get_token(size_t pos, size_t length) const {
    if (pos == -1)
        pos = this->_iter;
    auto iter = this->_ctx.begin() + pos;
    return {iter, iter + length};
}
