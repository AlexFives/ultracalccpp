//#include "../../include/parsers/FloatingPointNumberParser.hpp"

ContextToken FloatingPointNumberParser::parseImpl(Context &ctx) const {
    ContextToken result = this->parseZNumber(ctx);
    try {
        auto point = this->parsePoint(ctx);
        result.add(point);
    } catch (TokenNotFound &) {
        return result;
    }
    auto digits = this->parseDigits(ctx);
    result.add(digits);
    return result;
}

ContextToken FloatingPointNumberParser::parseZNumber(Context &ctx) const {
    static ZNumberParser parser;
    return parser.parse(ctx);
}

ContextToken FloatingPointNumberParser::parsePoint(Context &ctx) const {
    static PointParser parser;
    return parser.parse(ctx);
}

ContextToken FloatingPointNumberParser::parseDigits(Context &ctx) const {
    static DigitsParser parser;
    return parser.parse(ctx);
}
