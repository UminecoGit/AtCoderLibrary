#ifndef UNIONFIND_HPP
#define UNIONFIND_HPP 1

#include <vector>

using namespace std;


namespace umiAtcoder{

    class UnionFind{

        vector<int> siz,par;
        int tree_count;

        public:

        UnionFind(int n):siz(n,1),par(n,-1),tree_count(n){}

        int root(int x){
            if(par[x]==-1)return x;
            else return par[x] = root(par[x]);
        }

        int is_same(int a,int b){
            return root(a) == root(b);
        }

        bool unite(int a,int b){

            int pa = root(a);
            int pb = root(b);

            if(pa==pb)return false;

            if(siz[pa]<siz[pb])swap(pa,pb);
            par[pb] = pa;
            siz[pa] += siz[pb];
            tree_count--;

            return true;
        
        }

        int size(int x){
            return siz[root(x)];
        }

        int trees(){
            return tree_count;
        }
    
    };


}

#endif