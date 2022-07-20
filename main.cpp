#include <bits/stdc++.h>

#include "include/arithmetic/FloatNumber.hpp"

using namespace std;

int main() {
    ZNumber n1z(false, "123");
    Mantissa n1n("0001");
    FloatNumber n1(n1z, n1n);

    ZNumber n2z(true, "123");
    Mantissa n2n("0001");
    FloatNumber n2(n2z, n2n);

    auto res = n1 + n2;

    cout << res.to_string() << endl;

    return 0;
}