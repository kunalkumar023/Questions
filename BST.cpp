#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *left;
    Node *right;

    Node(int data){
        this->data = data;
        left = right = NULL;
    }
};

Node* insertElement(Node* root, int data){
    if(root == NULL){
        return new Node(data);
    }

    if(data < root->data){
        root->left = insertElement(root->left, data);
    }
    else if(data > root->data){
        root->right = insertElement(root->right, data);
    }

    return root;
}

void takeInput(Node* &root){
    int data;
    cin >> data;
    while(data != -1){
        root = insertElement(root, data);
        cin >> data;
    }
}

void inorder(Node* root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main(){
    Node* root = NULL;
    takeInput(root);

    cout << "Inorder Traversal: ";
    inorder(root);
    cout << endl;

    return 0;
}
