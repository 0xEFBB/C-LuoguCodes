#include <iostream>
using namespace std;
typedef struct binaryTree{
    int value;
    binaryTree *leftChild;
    binaryTree *rightChild;
}*tnp;
tnp createNodalPoint(int data){
    tnp tr=new binaryTree;
    tr->value=data;
    tr->leftChild=NULL;
    tr->rightChild=NULL;
    return tr;
}
void connect(tnp parent,tnp left,tnp right){
    parent->leftChild=left;
    parent->rightChild=right;
}
void preOrder(tnp root){
    if (!root)
    {
        return;
    }
    printf("%d ",root->value);
    preOrder(root->leftChild);
    preOrder(root->rightChild);
}
void inOrder(tnp root){
    if (!root)
    {
        return;
    }
    inOrder(root->leftChild);
    printf("%d ",root->value);
    inOrder(root->rightChild);
}
void postOrder(tnp root){
    if (!root)
    {
        return;
    }
    postOrder(root->leftChild);
    postOrder(root->rightChild);
    printf("%d ",root->value);
}
int main()
{
    int n,x,y;
    cin>>n;
    tnp tr[n+1];
    for (int i=1; i<=n; i++)
    {
        tr[i]=createNodalPoint(i);
    }
    for (int i=1; i<=n; i++)
    {
        cin>>x>>y;
        if (x)
        {
            if (y)
            {
                connect(tr[i], tr[x], tr[y]);
            }
            else
            {
                connect(tr[i], tr[x], NULL);
            }
        }
        else
        {
            if (y)
            {
                connect(tr[i], NULL, tr[y]);
            }
            else
            {
                continue;
            }
        }
    }
    preOrder(tr[1]);
    printf("\n");
    inOrder(tr[1]);
    printf("\n");
    postOrder(tr[1]);
    printf("\n");
    return 0;
}