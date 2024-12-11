



void Node:: inOrder(){
    if(this->lchild!=nullptr){
        this->lchild->preOrder();
    }
    cout<<this->data<<" ";
    if(this->rchild!=nullptr){
        this->rchild->preOrder();
    }
}


void Node:: preOrder(){
    cout<<this->data<<" ";
    if(this->lchild!=nullptr){
        this->lchild->preOrder();
    }
    if(this->rchild!=nullptr){
        this->rchild->preOrder();
    }
}

void Node:: postOrder(){
    if(this->lchild!=nullptr){
        this->lchild->postOrder();
    }
    if(this->rchild!=nullptr){
        this->rchild->postOrder();
    }
    cout<<this->data<<" ";
}








Node* Node::deleteNode(int k) {
    if (this->data == nullptr) {
        cout << "Non posso cancellare un nodo che non c'è" << endl;
        return this;
    }
    if (k == this->data) {
        if (this->lchild == nullptr && this->rchild == nullptr) {
            delete this;
            return nullptr;
        } else if (this->lchild == nullptr && this->rchild != nullptr) {
            Node* temp;
            temp = this->rchild;
            this->data = temp->data;
            this->rchild = temp->rchild;
            delete temp;
            return this;
        } else if (this->lchild != nullptr && this->rchild == nullptr) {
            Node* temp;
            temp = this->lchild;
            this->data = temp->data;
            this->lchild = temp->lchild;
            delete temp;
            return this;
        }
    }
    if (k < this->data) {
        if (this->lchild != nullptr)
            this->lchild = this->lchild->deleteNode(k);
    } else {
        if (this->rchild != nullptr)
            this->rchild = this->rchild->deleteNode(k);
    }
    return this;
}




bool Node::searchR(int k) {                     // ricerca ricorsiva
    bool check;
    if (this == NULL) {
        check = false;
        return check;
    }
    if (this->data == k) {
        check = true;
        return check;
    }
    if (k < this->data) {
        check = this->lchild->searchR(k);
    }
    else if (k > this->data) {
        check = this->rchild->searchR(k);
    }
    return check;
}




bool Node:: searchI(int k){ //ricerca iterativa
    bool check{true};
    Node *current{this};
    while (check){

        if (current==NULL){
            cout << "non trovato" << " ";
            return false;
        }

        if(current->data==k){
            cout << "trovato" << " ";
            return true;
        }
        if (k<current->data){
            current = current->lchild;
        } else {
            current=current->rchild;
        }
    }
    return -1;
}


// ricerca ricorsiva di k

bool Node:: searchR(int k){
    if (this==NULL){
        cout << "non trovato" << " ";
        return false;
    }
    if (this->data==k){
        cout << "trovato" << " ";
        return true;
    }
    if (k<this->data){
        return this->lchild->searchR(k);
    } else {
        return this->rchild->searchR(k);
    }
}

// inserimento iterativo di k

Node* Node::insertI(int k) {
    Node *current{this};
    Node *parent{nullptr};
    while (current != NULL) {
        if (current->data == k) {
            current->weight++;
            return this;
        }
        if (k < current->data) {
            parent = current;
            current = current->lchild;
        } else {
            parent = current;
            current = current->rchild;
        }
    }

    Node *n = new Node(k);
    if (k < parent->data) {
        parent->lchild = n;
    } else {
        parent->rchild = n;
    }
    return this;
}



#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;


class nodo{
    private:
    int data;
    int weight;
    nodo*right;
    nodo*left;


    public:

    nodo(int v){
        data=v;
        weight=1;
        right=nullptr;
        left=nullptr;
    }

    nodo*Insert_Iterattivo (nodo*r , int k){ //INSERIMENTO ITERATTIVO

    nodo*current{r};
    nodo*father{nullptr};
    bool check=true;

    while(check){
        if(current==NULL){
            if(k < father->data){
                father->left = new nodo(k);
            }else{
                father->right = new nodo(k);
            }
            return r;
        }
        if(current->data == k){
            current->weight ++;
            return r;
        }
        if(k< current->data){
            father=current;
            current = current->left;
        }else{
            father=current;
            current= current->right:
        }
}

void sort( nodo* r, vector<int>& v){
    if(r==NULL){
        return;
    }
    sort(r->left,v);
    v.push_back(r->data);
    sort(r->right,v);
    return;
}
