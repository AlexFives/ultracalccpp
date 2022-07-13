#pragma once

#include "../ParserInterface.hpp"

class NotZeroParser : public ParserInterface<NotZeroParser> {
private:
    friend class ParserInterface;

    ContextToken parseImpl(Context &ctx) const;
};

#include "../../src/parsers/NotZeroParser.tpp"