



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
