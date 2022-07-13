#pragma once

#include "../ParserInterface.hpp"


class PointParser : public ParserInterface<PointParser> {
private:
    friend class ParserInterface;

    ContextToken parseImpl(Context &ctx) const;
};

#include "../../src/parsers/PointParser.tpp"