#pragma once

#include "../ParserInterface.hpp"

class ZeroParser : public ParserInterface<ZeroParser> {
private:
    friend class ParserInterface;

    ContextToken parseImpl(Context &ctx) const;
};

#include "../../src/parsers/ZeroParser.tpp"