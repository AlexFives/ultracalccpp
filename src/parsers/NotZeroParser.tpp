//#include "../../include/parsers/NotZeroParser.hpp"

ContextToken NotZeroParser::parseImpl(Context &ctx) const {
    auto token = ctx.get_token();
    if (!NOT_ZERO.contains(token))
        throw TokenNotFound();
    ctx.step();
    return token;
}