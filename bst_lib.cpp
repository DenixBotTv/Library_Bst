#include "bst_lib.h"
#include <iostream>
using namespace std;

ostream& operator<<(ostream& Os, Node* node){
    Os << "Il valore del nodo è: " << node->valore << endl;
    Os << "Il weigth del nodo è: " << node->weigth << endl;
    if (node->rchild==nullptr)
    {
        Os << "Non c'è figlio destro"<<endl;
    }else{
        Os << "Il valore del figlio destro è: " << node->rchild->valore;
    }
    if (node->lchild==nullptr)
    {
        Os << "Non c'è figlio sinistro"<<endl;
    }else{
        Os << "Il valore del figlio sinitro è: " << node->rchild->valore;
    }
}


istream& operator>>(istream& Is, Node* node){
    int k{0};
    cin >> k;
    node->valore=k;
    node->weigth=1;
    node->lchild=nullptr;
    node->rchild=nullptr;
    Is >> node;
}