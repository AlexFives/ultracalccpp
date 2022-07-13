//#include "../../include/parsers/ExpParser.hpp"

ContextToken ExpParser::parseImpl(Context &ctx) const {
    auto token = ctx.get_token();
    if (!EXP.contains(token))
        throw TokenNotFound();
    ctx.step();
    return {token};
}