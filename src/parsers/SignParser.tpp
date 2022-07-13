//#include "../../include/parsers/SignParser.hpp"

ContextToken SignParser::parseImpl(Context &ctx) const {
    auto token = ctx.get_token();
    if (!SIGN.contains(token))
        throw TokenNotFound();
    ctx.step();
    return {token};
}