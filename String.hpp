#ifndef STRING_HPP
#define STRING_HPP 1

#include <string>
#include <vector>
#include <utility>
#define INIT_CHAR '|'


namespace umiAtcoder{

    vector<pair<char,long long>> rle(string s){
        
        vector<pair<char,long long>> scs;
        int count=0;
        char symbol = INIT_CHAR;

        for(long long i=0;i<s.size();i++){

            if(symbol!=s.at(i)){
                if(symbol!=INIT_CHAR)scs.push_back(make_pair(symbol,count));
                count=1;
                symbol = s.at(i);
            }else count++;
        }

        if(symbol!=INIT_CHAR)scs.push_back(make_pair(symbol,count));

        return scs;
    }


}





#endif