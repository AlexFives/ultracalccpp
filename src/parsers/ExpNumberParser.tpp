//#include "../../include/parsers/ExpNumberParser.hpp"

ContextToken ExpNumberParser::parseImpl(Context &ctx) const {
    ContextToken result = this->parseFloatingPointNumber(ctx);
    try {
        auto exp = this->parseExp(ctx);
        result.add(exp);
    } catch (TokenNotFound &) {
        return result;
    }
    auto z_number = this->parseZNumber(ctx);
    result.add(z_number);
    return result;
}

ContextToken ExpNumberParser::parseFloatingPointNumber(Context &ctx) const {
    static FloatingPointNumberParser parser;
    return parser.parse(ctx);
}

ContextToken ExpNumberParser::parseExp(Context &ctx) const {
    static ExpParser parser;
    return parser.parse(ctx);
}

ContextToken ExpNumberParser::parseZNumber(Context &ctx) const {
    static ZNumberParser parser;
    return parser.parse(ctx);
}
