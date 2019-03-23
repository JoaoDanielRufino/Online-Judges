#include <bits/stdc++.h>

using namespace std;

typedef struct node{
    int data;
    struct node *left;
    struct node *right;
}Tree;

Tree* insert(Tree* root, int data){
    if(root == NULL)
        return NULL;

    if(data <= root->data){
        if(root->left == NULL)
            return root;
        else
            return insert(root->left, data);
    }

    else{
        if(root->right == NULL)
            return root;
        else
            return insert(root->right, data);
    }
}

void preOrder(Tree* tr){
    if(tr == NULL)
        return;

    cout << " " << tr->data;
    preOrder(tr->left);
    preOrder(tr->right);
}

void inOrder(Tree* tr){
    if(tr == NULL)
        return;

    inOrder(tr->left);
    cout << " " << tr->data;
    inOrder(tr->right);
}

void postOrder(Tree* tr){
    if(tr == NULL)
        return;

    postOrder(tr->left);
    postOrder(tr->right);
    cout << " " << tr->data;
}

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int c,n,a;
    Tree *tr, *parent, *aux;

    cin >> c;

    for(int i = 1; i <= c; i++){
        cin >> n;
        tr = NULL;
        while(n--){
            cin >> a;

            aux = (Tree*) malloc(sizeof(Tree));
            aux->data = a;
            aux->left = NULL;
            aux->right = NULL;

            parent = insert(tr, a);
            if(parent == NULL)
                tr = aux;
            else if(a <= parent->data)
                parent->left = aux;
            else
                parent->right = aux;
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
