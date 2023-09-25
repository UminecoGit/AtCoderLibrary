#ifndef GENERAL_TOOL_HPP
#define GENERAL_TOOL_HPP 1


namespace umiAtcoder{

    template<typename T>
    bool chmax(T& a,T& b){

        if(a<b){
            a = b;
            return true;
        }
        return false;
    }

    template<typename T>
    bool chmin(T& a,T& b){

        if(a>b){
            a = b;
            return true;
        }
        return false;
    }  

}





#endif