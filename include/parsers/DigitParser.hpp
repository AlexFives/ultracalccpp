#pragma once

#include "../ParserInterface.hpp"

#include "ZeroParser.hpp"
#include "NotZeroParser.hpp"

class DigitParser : public ParserInterface<DigitParser> {
private:
    friend class ParserInterface;

    ContextToken parseImpl(Context &ctx) const;

    ContextToken parseZero(Context &ctx) const;

    ContextToken parseNotZero(Context &ctx) const;
};

#include "../../src/parsers/DigitParser.tpp"