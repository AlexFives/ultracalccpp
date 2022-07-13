#pragma once

#include "Var.hpp"

const Var ZERO = {"0"};
const Var NOT_ZERO = {"1", "2", "3", "4", "5", "6", "7", "8", "9"};
const Var DIGIT = ZERO + NOT_ZERO;
const Var SIGN = {"+", "-"};
const Var POINT = {"."};
const Var EXP = {"e", "E"};
const Var I = {"i", "I"};