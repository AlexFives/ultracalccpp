#pragma once

template<typename Derivative, typename T>
class TokenInterface {
public:
    T calculate() const {
        auto derivative = this->cast();
        return derivative->calcImpl();
    }

private:
    Derivative *cast() const {
        return static_cast<Derivative *>(static_cast<TokenInterface *>(this));
    }
};
