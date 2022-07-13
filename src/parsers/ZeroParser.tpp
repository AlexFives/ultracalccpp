//#include "../../include/parsers/ZeroParser.hpp"

ContextToken ZeroParser::parseImpl(Context &ctx) const {
    auto token = ctx.get_token();
    if (!ZERO.contains(token))
        throw TokenNotFound();
    ctx.step();
    return {token};
}