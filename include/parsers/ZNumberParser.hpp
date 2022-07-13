#pragma once

#include "../ParserInterface.hpp"

#include "SignParser.hpp"
#include "NNumberParser.hpp"

class ZNumberParser : public ParserInterface<ZNumberParser> {
private:
    friend class ParserInterface;

    ContextToken parseImpl(Context &ctx) const;

    ContextToken parseSign(Context &ctx) const;

    ContextToken parseNNumber(Context &ctx) const;
};

#include "../../src/parsers/ZNumberParser.tpp"