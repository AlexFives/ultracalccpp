//#include "../../include/parsers/DigitParser.hpp"

ContextToken DigitParser::parseImpl(Context &ctx) const {
    ContextToken result;
    try {
        result = this->parseZero(ctx);
    } catch (TokenNotFound &) {
        result = this->parseNotZero(ctx);
    }
    return result;
}

ContextToken DigitParser::parseZero(Context &ctx) const {
    static ZeroParser parser;
    return parser.parse(ctx);
}

ContextToken DigitParser::parseNotZero(Context &ctx) const {
    static NotZeroParser parser;
    return parser.parse(ctx);
}