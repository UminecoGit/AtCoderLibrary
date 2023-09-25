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

    template<typename T>
    T lcm(T a,T b){
    
        T g = gcd(a,b);

        return a*b/g;
    }

    template<typename T>
    vector<T> nextd(T a,int n){

        vector<int> ex;
        T x = a;

        while(x!=0){

            ex.push_back(x%n);
            x/=n;
        }

        reverse(ex.begin(),ex.end());
        return ex;

    }

    /*
    *   pow エラー
    *   main.cpp:12:11: error: no matching function for call to 'pow'
    *   cout<<umiAtcoder::pow(2,10)<<endl;
    *           ^~~~~~~~~~~~~~~
    *   ./GeneralMath.hpp:48:7: note: candidate template ignored: couldn't infer template argument 'S'
    *    S pow(T& a,T& n){
    */

   /*
        テンプレート起因のエラーの可能性
   
   
   */

    long long pow(const long long& a,const long long& n){

        if(n==0)return 1;
        if(n%2==1)return pow(a,n-1)*a;
        
        long long x = pow(a,n/2);
        return x*x;

    }

    template<typename T>
    vector<T> primes(T n){

        vector<bool> table(n+1,true);
        vector<T> prime;

        for(T i=2;i<=n;i++){

            if(!table.at(i))continue;

            prime.push_back(i);
            int k = 1;
            while(k*i<=n)table.at((k++)*i) = false;
        }

        return prime;
    
    }

    template<typename T>
    bool isPrime(T a){

        for(T i=2;i*i<=a;i++){

            if(a%i==0)return false;

        }

        return true;
    }

    template<typename T>
    vector<T> divisors(T a){

        vector<T> divisor;

        for(T i=1;i*i<=a;i++){

            if(a%i!=0)continue;

            divisor.push_back(i);
            if(i!=ceil(a/i))divisor.push_back(a/i);

        }

        sort(divisor.begin(),divisor.end());

        return divisor;
    }

}


#endif