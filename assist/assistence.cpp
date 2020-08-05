#include "assistence.h"
#include <math.h>

double assist::atan2(double denum, double num) {
    double ret;
    if (num != 0) {
        if (num > 0) { 
            if (denum >= 0) ret = atan(denum/num); // 1e kwadrant 
            else ret = atan(denum/num) + (2*M_PI); // 4e kwadrant
        } else { // num < 0: 2e kwadrant & 3e kwadrant
            ret = atan(denum/num) + M_PI;
        } 
    } else { // num == 0
        if (denum >= 0) ret = M_PI; // 1e kwadrant 
        else ret = (3/2)*M_PI; // 4e kwadrant 
    }
    return ret;
}

int assist::sgn(double val) {
    return (0 < val) - (val < 0);
}