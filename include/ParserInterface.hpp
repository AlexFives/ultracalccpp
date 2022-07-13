#pragma once

#include "ContextToken.hpp"
#include "Context.hpp"
#include "constants.hpp"
#include "exceptions.hpp"

template<typename Derivative>
class ParserInterface {
public:
    ContextToken parse(Context &ctx) const {
        auto derivative = this->cast();
        return derivative->parseImpl(ctx);
    }

private:
    Derivative *cast() const {
        return static_cast<Derivative *>(const_cast<ParserInterface *>(this));
    }
};