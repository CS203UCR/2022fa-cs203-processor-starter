#ifndef MATEXP_REFERENCE_INCLUDED
#define MATEXP_REFERENCE_INCLUDED
#include <cstdlib>
#include "archlab.h"
#include <unistd.h>
#include<cstdint>
#include"function_map.hpp"
#include <bits/stdc++.h>
using namespace std;

void __attribute__((optimize("O4"))) BCDConversion(char *r, int32_t n)
{
    // Base Case
    r[0]=' ';
    if (n == 0) {
        return;
    }
    if (n < 0) {
        r[0]='-';
        n = (-1)*n;
    }
 
    // To store the reverse of n
 
    // Reversing the digits
    int pos=10;
    while (n > 0) {
        r[pos--] = (n % 10)+'0';
        n /= 10;
    }
    while (pos>0) r[pos--] = '0';
 
    // Iterate through all digits in rev
}


//template<typename T>
void __attribute__((noinline,optimize("O4"))) bcd_reference(char **dst, int32_t *src, uint32_t size) {
    // Base Case
    for(int i = 0; i < size; i++)
    {
#ifdef DEBUG_MESSAGE
        std::cerr << "input:" << src[i] << std::endl;
#endif
        BCDConversion(dst[i], src[i]);
#ifdef DEBUG_MESSAGE
        std::cerr << "ref:" << dst[i] << std::endl;
#endif
    }
}
#endif