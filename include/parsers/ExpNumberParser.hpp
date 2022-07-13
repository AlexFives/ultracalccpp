#pragma once

#include "../ParserInterface.hpp"

#include "FloatingPointNumberParser.hpp"
#include "ExpParser.hpp"
#include "ZNumberParser.hpp"

class ExpNumberParser : public ParserInterface<ExpNumberParser> {
private:
    friend class ParserInterface;

    ContextToken parseImpl(Context &ctx) const;

    ContextToken parseFloatingPointNumber(Context &ctx) const;

    ContextToken parseExp(Context &ctx) const;

    ContextToken parseZNumber(Context &ctx) const;
};

#include "../../src/parsers/ExpNumberParser.tpp"