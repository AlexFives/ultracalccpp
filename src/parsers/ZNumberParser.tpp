//#include "../../include/parsers/ZNumberParser.hpp"

ContextToken ZNumberParser::parseImpl(Context &ctx) const {
    ContextToken result;
    try {
        ContextToken sign = this->parseSign(ctx);
        result.add(sign);
    } catch (TokenNotFound &) {}
    ContextToken n_number = this->parseNNumber(ctx);
    result.add(n_number);
    return result;
}

ContextToken ZNumberParser::parseSign(Context &ctx) const {
    static SignParser parser;
    return parser.parse(ctx);
}

ContextToken ZNumberParser::parseNNumber(Context &ctx) const {
    static NNumberParser parser;
    return parser.parse(ctx);
}