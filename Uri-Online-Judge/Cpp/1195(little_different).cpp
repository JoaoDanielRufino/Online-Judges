#include <bits/stdc++.h>

using namespace std;

struct node{
    int data;
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

void preOrder(Tree* tr){
    if(*tr == NULL)
        return;

    cout << " " << (*tr)->data;
    preOrder(&((*tr)->left));
    preOrder(&((*tr)->right));
}

void inOrder(Tree* tr){
    if(*tr == NULL)
        return;

    inOrder(&((*tr)->left));
    cout << " " << (*tr)->data;
    inOrder(&((*tr)->right));
}

void postOrder(Tree* tr){
    if(*tr == NULL)
        return;

    postOrder(&((*tr)->left));
    postOrder(&((*tr)->right));
    cout << " " << (*tr)->data;
}

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int c,n,a;
    Tree *tr;

    cin >> c;

    for(int i = 1; i <= c; i++){
        cin >> n;
        tr = make_tree();
        while(n--){
            cin >> a;
            insert(tr, a);
        }
        cout << "Case " << i << ":" << endl;
        cout << "Pre.:";
        preOrder(tr);

        cout << endl << "In..:";
        inOrder(tr);

        cout << endl << "Post:";
        postOrder(tr);
        cout << endl << endl;
    }

    return 0;
}
