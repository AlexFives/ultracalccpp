//#include "../../include/parsers/IParser.hpp"

ContextToken IParser::parseImpl(Context &ctx) const {
    auto token = ctx.get_token();
    if (!I.contains(token))
        throw TokenNotFound();
    ctx.step();
    return {token};
}