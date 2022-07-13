#pragma once

#include "../ParserInterface.hpp"

#include "ZNumberParser.hpp"
#include "PointParser.hpp"
#include "DigitsParser.hpp"

class FloatingPointNumberParser : public ParserInterface<FloatingPointNumberParser> {
private:
    friend class ParserInterface;

    ContextToken parseImpl(Context &ctx) const;

    ContextToken parseZNumber(Context &ctx) const;

    ContextToken parsePoint(Context &ctx) const;

    ContextToken parseDigits(Context &ctx) const;
};

#include "../../src/parsers/FloatingPointNumberParser.tpp"