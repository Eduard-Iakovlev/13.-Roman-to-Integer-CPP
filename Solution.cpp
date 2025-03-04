#include "Solution.h"

int Solution::romanToInt(string s){
    int result(0), current(0);
    int tmp(0);

    for (size_t i = s.size(); i != 0; --i) {
        switch (s[i - 1]) {
        case 'I':
            tmp = 1;
            if (current < tmp) current = tmp;
            break;
        case 'V':
            tmp = 5;
            if (current < tmp) current = tmp;
            break;
        case 'X':
            tmp = 10;
            if (current < tmp) current = tmp;
            break;
        case 'L':
            tmp = 50;
            if (current < tmp) current = tmp;
            break;
        case 'C':
            tmp = 100;
            if (current < tmp) current = tmp;
            break;
        case 'D':
            tmp = 500;
            if (current < tmp) current = tmp;
            break;
        case 'M':
            tmp = 1000;
            if (current < tmp) current = tmp;
            break;
        default:
            break;
        }
        (tmp < current) ? result -= tmp : result += tmp;
    }


    return result;
}
