#pragma once

#include "../ParserInterface.hpp"

#include "DigitParser.hpp"

class DigitsParser : public ParserInterface<DigitsParser> {
protected:
    friend class ParserInterface;

    ContextToken parseImpl(Context &ctx) const;

    ContextToken parseDigit(Context &ctx) const;
};

#include "../../src/parsers/DigitsParser.tpp"