#include <iostream>
using namespace std;
typedef struct binaryTree{
    char value;
    binaryTree *leftChild;
    binaryTree *rightChild;
}*tnp;
tnp createNodalPoint(char data){
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
    printf("%c",root->value);
    preOrder(root->leftChild);
    preOrder(root->rightChild);
}
int main(){
    int n;
    cin>>n;
    tnp tr[26];
    char point[26][3];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>point[i][j];
            if (!tr[int(point[i][j])-65]&&point[i][j]!='*')
            {
                tr[int(point[i][j])-65]=createNodalPoint(point[i][j]);
            }
        }
        if (point[i][1]=='*')
        {
            if (point[i][2]=='*')
            {
                continue;
            }
            else
            {
                connect(tr[int(point[i][0])-65],NULL,tr[int(point[i][2])-65]);
            }
        }
        else
        {
            if (point[i][2]=='*')
            {
                connect(tr[int(point[i][0])-65],tr[int(point[i][1])-65],NULL);
            }
            else
            {
                connect(tr[int(point[i][0])-65],tr[int(point[i][1])-65],
                tr[int(point[i][2])-65]);
            }
        }
    }
    int root=(int)point[0][0]-65;
    preOrder(tr[root]);
    return 0;
}