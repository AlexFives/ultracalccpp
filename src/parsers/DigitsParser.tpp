//#include "../../include/parsers/DigitsParser.hpp"

ContextToken DigitsParser::parseImpl(Context &ctx) const {
    ContextToken result;
    while (ctx.iter() < ctx.end()) {
        try {
            ContextToken digit = this->parseDigit(ctx);
            result.add(digit);
        } catch (TokenNotFound &) {
            break;
        }
    }
    if (!result)
        throw TokenNotFound();
    return result;
}

ContextToken DigitsParser::parseDigit(Context &ctx) const {
    static DigitParser parser;
    return parser.parse(ctx);
}