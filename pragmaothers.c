/*
#pragma gcc dependency: allow you to check the relative dates of the current file and another file if other files is more recent then current then warning issued . useful if the current file is derived from the other file
syntax:
pragma GCC dependency "parse.y"
pragma GCC dependency "/user/file.h"

#pragma GCC system header: it take no argument,it causes the rest of the code in the current file to be treated as if it come from system header

#pragma once:header file containing this directive is included only once even if the programmer includes it multiplr times during a compilation. with the use of this save the program frommultiple inclusion optimisation

syntax: #pragma once
*/

   
