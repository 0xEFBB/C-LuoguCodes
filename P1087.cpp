#include <iostream>
#include <cmath>
using namespace std;
char str[1050];
typedef struct binaryTree
{
    char value;
    binaryTree *leftChild;
    binaryTree *rightChild;
}*tnp;

char judge(char *s,long size){
    for (int i = 0; i < size-1; i++)
    {
        if(*(s+i)!=*(s+i+1))
        {
            return 'F';
        }
    }
    if (*s=='0')
    {
        return 'B';
    }
    return 'I';
}

tnp fbi(char *s,long size){
    if (size<=0)
    {
        return NULL;
    }
    
    tnp np=new binaryTree;
    np->value=judge(s,size);
    size/=2;
    np->leftChild=fbi(s,size);
    np->rightChild=fbi(s+size,size);
    return np;
}

void postOrder(tnp root){
    if (!root)
    {
        return;
    }
    
    postOrder(root->leftChild);
    postOrder(root->rightChild);
    printf("%c",root->value);
}

int main(){
    tnp r;
    int n;
    cin>>n;
    for (int i = 0; i < pow(2,n); i++)
    {
        cin>>str[i];
    }
    r=fbi(str,strlen(str));
    postOrder(r);
    return 0;
}
