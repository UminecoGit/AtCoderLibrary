#ifndef GENERAL_MATH_HPP
#define GENERAL_MATH_HPP 1

#include <vector>
#include <algorithm>

using namespace std;

namespace umiAtcoder{

    template<typename T>
    T gcd(T a,T b){

        T ma = max(a,b);
        T mi = min(a,b);

        if(ma%mi==0)return mi;
        return gcd(mi,ma%mi);
    
    }

}


#endif