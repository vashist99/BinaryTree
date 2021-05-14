#include<bits/stdc++.h>
#include "BinTree.hpp"
using namespace std;


int main(){
    BinTree b;
    b.insert(4);
    // cout<<b.size()<<"\n";
    // cout<<b.leftmost_leaf()<<"\n";
    // cout<<b.rightmost_leaf()<<"\n";
    // cout<<b.prefix()<<"\n";
    b.insert(5);
    b.insert(6);
    b.insert(7);
    b.insert(8);
    // b.insert(9);
    // b.insert(10);
    // cout<<b.size()<<"\n";
    // cout<<b.leftmost_leaf()<<"\n";
    // cout<<b.rightmost_leaf()<<"\n";
    // cout<<b.prefix()<<"\n";
    cout<<b.postfix()<<"\n";
    cout<<b.prefix()<<"\n";
    cout<<b.infix()<<"\n";
    cout<<b.size()<<"\n";
    cout<<b.leftmost_leaf()<<"\n";
    cout<<b.rightmost_leaf()<<"\n";

}