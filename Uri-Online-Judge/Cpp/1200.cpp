#include <bits/stdc++.h>

using namespace std;

string ok;

struct node{
    char data;
    struct node *left;
    struct node *right;
};

typedef struct node* Tree;

Tree* make_tree(){
    Tree *tr = new Tree;
    *tr = NULL;
    return tr;
}

void insert(Tree* tr, int data){
    struct node *aux = new struct node;
    aux->data = data;
    aux->left = NULL;
    aux->right = NULL;

    if(*tr == NULL)
        *tr = aux;
    else{
        struct node *parent,*current;
        current = *tr;
        parent = NULL;

        while(current != NULL){
            parent = current;
            if(aux->data > current->data)
                current = current->right;
            else
                current = current->left;
        }

        if(aux->data > parent->data)
            parent->right = aux;
        else
            parent->left = aux;
    }
}

bool findElem(Tree *tr, int elem){
    if(*tr == NULL)
        return false;

    if((*tr)->data == elem)
        return true;

    if((*tr)->data > elem)
        findElem(&((*tr)->left), elem);
    else
        findElem(&((*tr)->right), elem);
}

void preOrder(Tree* tr){
    if(*tr == NULL)
        return;

    ok += (*tr)->data;
    preOrder(&((*tr)->left));
    preOrder(&((*tr)->right));
}

void inOrder(Tree* tr){
    if(*tr == NULL)
        return;

    inOrder(&((*tr)->left));
    ok += (*tr)->data;
    inOrder(&((*tr)->right));
}

void postOrder(Tree* tr){
    if(*tr == NULL)
        return;

    postOrder(&((*tr)->left));
    postOrder(&((*tr)->right));
    ok += (*tr)->data;
}

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    string str;
    Tree *tr = make_tree();

    while(getline(cin, str)){
        if(str == "INFIXA"){
            inOrder(tr);
            for(int i = 0; i < ok.size(); i++){
                if(!i)
                    cout << ok[i];
                else
                    cout << " " << ok[i];
            }
            ok.clear();
            cout << endl;
        }
        else if(str == "PREFIXA"){
            preOrder(tr);
            for(int i = 0; i < ok.size(); i++){
                if(!i)
                    cout << ok[i];
                else
                    cout << " " << ok[i];
            }
            ok.clear();
            cout << endl;
        }
        else if(str == "POSFIXA"){
            postOrder(tr);
            for(int i = 0; i < ok.size(); i++){
                if(!i)
                    cout << ok[i];
                else
                    cout << " " << ok[i];
            }
            ok.clear();
            cout << endl;
        }
        else if(str[0] == 'I')
            insert(tr, str[2]);
        else if(str[0] == 'P'){
            if(findElem(tr, str[2]))
                cout << str[2] << " existe" << endl;
            else
                cout << str[2] << " nao existe" << endl;
        }
    }

    return 0;
}
