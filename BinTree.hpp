#include<bits/stdc++.h>

using namespace std;



class BinTree{
    private:
        int* bst;
        int sz,leftm,rightm;
    
    public:
        BinTree()
        {
            this->sz=0;
            this->bst= new int[1];
            this->leftm = 0;
            this->rightm = 0;
        }
        void insert(int data){
            if(this->sz==0)
                {bst[this->sz] = data;
                this->sz++;
            }
            else{
            int *temp = new int[this->sz+1];
            for(int i=0;i<this->sz;i++){
                temp[i] = bst[i];
            }
            temp[this->sz] = data;
            this->sz++;
            delete[] bst;
            bst = temp;
            }
            if(((this->sz-1)&(this->sz)))
                this->rightm = this->sz-1;
            else if(((this->sz)&(this->sz+1)))
                this->leftm = this->sz-1; 
        }
        int size(){
            return this->sz;
        }

        int getParent(int x){
            return int(x/2);
        }

        int getSibling(int x){
            return x+1;
        }

        int getLeftChild(int x){
            return 2*x+1;
        }

        int getRightChild(int x){
            return 2*x+2;
        }

        string getPostfix(int x){
            string s;
            if (x>=this->sz)
                {  
                    return s; 
                }
            s.insert(s.size(),getPostfix(getLeftChild(x)));
            s.insert(s.size(),getPostfix(getRightChild(x)));
            s.insert(s.size(),to_string(bst[x]));
        }

        string getPrefix(int x){
            string s;
            if (x>=this->sz)
                {  
                    return s; 
                }
            s.insert(s.size(),to_string(bst[x]));    
            s.insert(s.size(),getPrefix(getLeftChild(x)));
            s.insert(s.size(),getPrefix(getRightChild(x)));
            
        }

        string getInfix(int x){
            string s;
            if (x>=this->sz)
                {  
                    return s; 
                }
            s.insert(s.size(),getInfix(getLeftChild(x)));
            s.insert(s.size(),to_string(bst[x])); 
            s.insert(s.size(),getInfix(getRightChild(x)));
        }

        string prefix(){
            string str = this->getPrefix(0);
            return str;
        }

        string postfix(){
            string str = this->getPostfix(0);
            return str;
        }

        string infix(){
            string str = this->getInfix(0);
            return str;
        }

        int leftmost_leaf(){
            return bst[leftm];
        }

        int rightmost_leaf(){
            return bst[rightm];
        }

        ~BinTree(){
            delete[] bst;
        }

};


