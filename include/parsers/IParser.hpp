#pragma once

#include "../ParserInterface.hpp"


class IParser : public ParserInterface<IParser> {
private:
    friend class ParserInterface;

    ContextToken parseImpl(Context &ctx) const;
};

#include "../../src/parsers/IParser.tpp"