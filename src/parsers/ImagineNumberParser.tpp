//#include "../../include/parsers/ImagineNumberParser.hpp"

ContextToken ImagineNumberParser::parseImpl(Context &ctx) const {
    ContextToken result;
    try {
        auto sign = this->parseSign(ctx);
        result.add(sign);
    } catch (TokenNotFound &) {}
    try {
        auto ctx_copy = ctx;
        auto exp_number = this->parseExpNumber(ctx_copy);
        ctx = ctx_copy;
        result.add(exp_number);
    } catch (TokenNotFound &) {}
    auto i = this->parseI(ctx);
    result.add(i);
    return result;
}

ContextToken ImagineNumberParser::parseSign(Context &ctx) const {
    static SignParser parser;
    return parser.parse(ctx);
}

ContextToken ImagineNumberParser::parseExpNumber(Context &ctx) const {
    static ExpNumberParser parser;
    return parser.parse(ctx);
}

ContextToken ImagineNumberParser::parseI(Context &ctx) const {
    static IParser parser;
    return parser.parse(ctx);
}
