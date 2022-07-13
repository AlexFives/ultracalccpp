#pragma once

#include "../ParserInterface.hpp"


class ExpParser : public ParserInterface<ExpParser> {
private:
    friend class ParserInterface;

    ContextToken parseImpl(Context &ctx) const;
};

#include "../../src/parsers/ExpParser.tpp"