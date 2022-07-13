//#include "../../include/parsers/PointParser.hpp"

ContextToken PointParser::parseImpl(Context &ctx) const {
    auto token = ctx.get_token();
    if (!POINT.contains(token))
        throw TokenNotFound();
    ctx.step();
    return {token};
}