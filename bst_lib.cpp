#include <iostream>
#include "Node.h"
using namespace std;

    Node* Node::getRchild(){
        return rchild;
    }

    Node* Node::getLchild(){
        return lchild;
    }

    void Node::setRchild(Node* Root){
        rchild = Root;
    }

    void Node::setLchild(Node* Root){
        lchild = Root;
    }

    int Node::getValue(){
        return value;
    }


    
    Node* Node::Insert_It(int k){
        Node* NewNode = new Node(k);    
        Node* current{this};
        Node* parent{nullptr};

        //Caso Base
        if (current==nullptr)
        {
            return NewNode;
        }

        //Spostamento sull'albero
        while (current != nullptr)
        {
            if (k < current->value)
            {
                current = current->lchild;
            }else{
                current = current->rchild;
            }
            
        }

        //Inserimento del nuovo Nodo
        if (k < parent->value)
        {
            parent->lchild = NewNode;
        }else{
            parent->rchild = NewNode;
        }
    }



    // Inserimento Ricorsivo
    Node* Node::Insert_Rs(int k){
        Node* NewNode = new Node(k);
        Node* current{this};
        
        //Caso Base

        if (current==nullptr)
        {
            return NewNode;
        }

        //Se k è minore del nodo SINISTRA

        if (k < current)
        {
            if (current->lchild == nullptr)
            {
                return NewNode;
            }else{
                current->lchild = current->lchild->Insert_Rs(k);
            }
            
            
        }
        
        //Se Destra

        if (k > current)
        {
            if (current->rchild ==nullptr)
            {
                return NewNode;
            }else{
                current->rchild = current->rchild->Insert_Rs(k);
            }

            
        }
        
        return current
        

    }



    //Search Iterativo
    Node* Node::Search_It(int k){
        Node* current{this};

        //Caso Albero Vuoto 
        if (current == nullptr)
        {
            return nullptr;
        }
        
        while (current->value!=k)
        {
            if (current->value==k)
            {
                return current;
            }
            if (k<current->value)
            {
                current= current->lchild;
            }else{
                current = current->rchild;
            }
            
        }
        return nullptr;
    }




    //Search Ricorsivo
    Node* Node::Search_Rs(int k){
        Node* current {this};
        
        //Caso base
        if (current == nullptr)
        {
            return nullptr;
        }
        if (current->value == k)
        {
            return current;
        }
        

        if (k < current->value)
        {
            return current->lchild->Search_Rs(k);
        }else{
            return current->rchild->Search_Rs(k);
        }
        
        return nullptr;

    }


    void Node::preOrder(){
        cout << this->value<<" ";
        if (this->lchild!=nullptr)
        {
            this->lchild->inOrder();
        }
        if (this->rchild!=nullptr)
        {
            this->rchild->inOrder();
        }
        
    }

    void Node::postOrder(){
        if (this->lchild!=nullptr)
        {
            this->lchild->inOrder();
        }
        if (this->rchild!=nullptr)
        {
            this->rchild->inOrder();
        }
        cout << this->value<<" ";
    }

    void Node::inOrder(){
        if (this->lchild!=nullptr)
        {
            this->lchild->inOrder();
        }
        cout << this->value<<" ";
        if (this->rchild!=nullptr)
        {
            this->rchild->inOrder();
        }
        
    }
