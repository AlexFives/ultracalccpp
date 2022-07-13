#pragma once

#include "../ParserInterface.hpp"


class SignParser : public ParserInterface<SignParser> {
private:
    friend class ParserInterface;

    ContextToken parseImpl(Context &ctx) const;
};

#include "../../src/parsers/SignParser.tpp"