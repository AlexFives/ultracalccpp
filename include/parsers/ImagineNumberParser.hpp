#pragma once

#include "../ParserInterface.hpp"

#include "ExpNumberParser.hpp"
#include "SignParser.hpp"
#include "IParser.hpp"

class ImagineNumberParser : public ParserInterface<ImagineNumberParser> {
private:
    friend class ParserInterface;

    ContextToken parseImpl(Context &ctx) const;

    ContextToken parseExpNumber(Context &ctx) const;

    ContextToken parseSign(Context &ctx) const;

    ContextToken parseI(Context &ctx) const;
};

#include "../../src/parsers/ImagineNumberParser.tpp"