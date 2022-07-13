#include <bits/stdc++.h>

#include "include/parsers/ImagineNumberParser.hpp"

using namespace std;

int main() {
    ImagineNumberParser parser;
    Context ctx("");
    auto result = parser.parse(ctx);
    auto string = result.getToken();
    cout << string << endl;

    return 0;
}