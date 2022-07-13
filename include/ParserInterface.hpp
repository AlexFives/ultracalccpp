#pragma once

#include "TokenInterface.hpp"
#include "Context.hpp"

template<typename Derivative>
class ParserInterface {
public:
    auto *parse(Context &ctx) const {
        auto derivative = this->cast();
        return derivative->parseImpl(ctx);
    }

private:
    Derivative *cast() const {
        return static_cast<Derivative *>(const_cast<ParserInterface *>(this));
    }
};