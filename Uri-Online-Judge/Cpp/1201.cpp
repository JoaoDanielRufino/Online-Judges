#include <bits/stdc++.h>

using namespace std;

string str;

typedef struct tree{
    int info;
    struct tree* left;
    struct tree* right;
}Tree;

void insert(Tree **tr, int elem){
    if(tr == NULL)
        return;

    if(*tr == NULL){
        Tree *newTree = (Tree*) malloc(sizeof(Tree));
        newTree->info = elem;
        newTree->left = NULL;
        newTree->right = NULL;
        *tr = newTree;
        return;
    }

    if(elem > (*tr)->info)
        insert(&(*tr)->right, elem);
    else
        insert(&(*tr)->left, elem);
}

void removeElem(Tree **tr, int elem){
    if(tr == NULL || *tr == NULL)
        return;

    if(elem > (*tr)->info)
        return removeElem(&(*tr)->right, elem);
    else if(elem < (*tr)->info)
        return removeElem(&(*tr)->left, elem);

    if((*tr)->left == NULL && (*tr)->right == NULL){
        free(*tr);
        *tr = NULL;
        return;
    }

    if((*tr)->left != NULL && (*tr)->right == NULL){
        Tree *aux = *tr;
        *tr = (*tr)->left;
        free(aux);
        return;
    }

    if((*tr)->left == NULL && (*tr)->right != NULL){
        Tree *aux = *tr;
        *tr = (*tr)->right;
        free(aux);
        return;
    }

    if((*tr)->left != NULL && (*tr)->right != NULL){
        Tree *aux = (*tr)->left;

        while(aux->right != NULL)
            aux = aux->right;

        (*tr)->info = aux->info;
        return removeElem(&(*tr)->left, aux->info);
    }
}

bool find(Tree *tr, int elem){
    if(tr == NULL)
        return false;

    if(tr->info == elem)
        return true;

    if(elem > tr->info)
        find(tr->right, elem);
    else
        find(tr->left, elem);
}

void infix(Tree *tr, int *flag){
    if(tr == NULL)
        return;

    infix(tr->left, flag);
    if(*flag == 0)
        cout << " ";
    *flag = 0;
    cout << tr->info;
    infix(tr->right, flag);
}

void prefix(Tree *tr, int *flag){
    if(tr == NULL)
        return;

    if(*flag == 0)
        cout << " ";
    *flag = 0;
    cout << tr->info;
    prefix(tr->left, flag);
    prefix(tr->right, flag);
}

void postfix(Tree *tr, int *flag){
    if(tr == NULL)
        return;

    postfix(tr->left, flag);
    postfix(tr->right, flag);
    if(*flag == 0)
        cout << " ";
    *flag = 0;
    cout << tr->info;
}

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    Tree *tr = NULL;
    int elem,flag;
    string op;

    while(cin >> op){
        flag = 1;
        if(op == "INFIXA"){
            infix(tr, &flag);
            cout << endl;
        }
        else if(op == "PREFIXA"){
            prefix(tr, &flag);
            cout << endl;
        }
        else if(op == "POSFIXA"){
            postfix(tr, &flag);
            cout << endl;
        }
        else if(op == "I"){
            cin >> elem;
            insert(&tr, elem);
        }
        else if(op == "P"){
            cin >> elem;
            if(find(tr, elem))
                cout << elem << " existe" << endl;
            else
                cout << elem << " nao existe" << endl;
        }
        else if(op == "R"){
            cin >> elem;
            removeElem(&tr, elem);
        }
    }

    return 0;
}
