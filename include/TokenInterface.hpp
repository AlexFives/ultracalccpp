#pragma once

#include <string>

template<typename Derivative>
class TokenInterface {
public:
    std::string getToken() const {
        auto derivative = this->cast();
        return derivative->getTokenImpl();
    }

private:
    Derivative *cast() const {
        return static_cast<Derivative *>(static_cast<TokenInterface *>(this));
    }
};
