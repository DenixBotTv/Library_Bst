#ifndef _BST_LIB_H_
#define _BST_LIB_H_

#include <iostream>
using namespace std;

class Node{
    private:
        int valore;
        int weigth;
        Node *lchild;
        Node *rchild;
    public:
        Node(int a){
            valore=a;
            weigth=1;
            lchild=nullptr;
            rchild=nullptr;
        }
        bool searchI(int k);  // ricerca iterativa di k
        bool searchR(int k);  // ricerca ricorsiva di k
        Node* insertI(int k);  // inserimento iterativa di k
        Node* insertR(int k);  // inserimento ricorsivo di k
        void inOrder(); //attraversamento in inOrder
        void preOrder(); //attraversamento in preOrder
        void postOrder(); //attraversamento in postOrder
        Node* deleteNode(int k); // cancellazione del nodo k
        bool isBst(); //verifica che sia un bst o meno
        friend ostream operator<<(ostream& Os,const Node& Node);
        friend istream operator<<(istream& Is,const Node& Node);

};




/*
Node* RicorsiveInsert(Node*R,int N){
	if (R==nullptr)
	{
		return new Node(N);	
	}
	if (R->valore==N)
	{
		R->weigth++;
		return R;
	}
	if (R->valore>N)
	{
		R->rchild=RicorsiveInsert(R->lchild,N);
	}else{
		R->lchild=RicorsiveInsert(R->rchild,N);
	}
	return R;
}

Node* IterativeInsert(Node* R, int N) {
    Node* newNode = new Node(N);
    if (R == nullptr) { //Se siamo gia in foglia
        return newNode;
    }
    
    Node* current = R;
    Node* parent = nullptr;

    while (current != nullptr) {
        parent = current;
        if (current->valore == N) { // se il valore è uguale
            current->weigth++;
            return R;
        }
        if (current->valore > N) { // spostamento 
            current = current->lchild;
        } else {
            current = current->rchild;
        }
    } // end while
    
    if (parent->valore > N) { //last check
        parent->lchild = newNode;
    } else {
        parent->rchild = newNode;
    }
    
    return R;
}


Node* RicorsiveSearch(Node*Root, int k){
    if(Root==nullptr){
        return nullptr;
    }
    if (Root->valore== k)
    {
        return Root;
    }
    if (Root->valore > k){
        return RicorsiveSearch(Root->lchild,k);
    }else{
        return RicorsiveSearch(Root->rchild,k);
    }
    
}


Node* IterativeSearch(Node*Root,int k){
    while (Root!=nullptr){
        if (Root->valore == k)
        {
            return Root;
        }
        if (Root->valore > k)
        {
            Root=Root->lchild,k;
        }else{
            Root=Root->rchild,k;
        }
        
        
    }
    return nullptr;
    
}

bool DeleteNode(Node* Root, int k) {
    if (Root == nullptr) {
        return false;
    }

    Root = RicorsiveSearch(Root,k);
    if (Root->lchild == nullptr) {
            Root = Root->rchild;
            delete Root;
            return true;
    } else if (Root->rchild == nullptr) {
            Root = Root->lchild;
            delete Root;
            return true;
    } 
    return false;
}




void InOrder(Node*Root){
    if (Root==nullptr)
    {
        return;
    }
    cout << Root->valore << " ";
    InOrder(Root->lchild);
    InOrder(Root->rchild);   
}

void PreOrder(Node*Root){
    if (Root==nullptr)
    {
        return;
    }
    PreOrder(Root->lchild);
    cout << Root->valore << " ";
    PreOrder(Root->rchild);   
}

void PostOrder(Node*Root){
    if (Root==nullptr)
    {
        return;
    }
    PostOrder(Root->lchild);
    PostOrder(Root->rchild);   
    cout << Root->valore << " ";
}

int RecursiveHeight(Node* Root){
    if (Root==nullptr)
    {
        return 0;
    }
    int HeightRight= RecursiveHeight(Root->rchild);
    int HeightLeft= RecursiveHeight(Root->lchild);
    return max(HeightLeft,HeightRight);
    
}


bool IsBST(Node* Root){
    if (Root==nullptr)
    {
        cout << "Albero vuoto";
        return false;
    }
    
    if (Root->lchild->valore<Root->valore&&Root->rchild->valore>Root->valore)
    {
        return true;
    }else{
        return false;
    }
    //Sono al corrente che non è quello richiesto nei prossimi giorni cerco di trovare una implementazione corretta per il controllo di tutto l'albero
}

*/

#endif