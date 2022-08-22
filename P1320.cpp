#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
using namespace std;
int main(){
    int cnt=1;
    char *inn=new char[205];
    char *tool=new char[205];
    cin>>inn;
    long size=strlen(inn);
    char *in=new char[size*size+5];
    strcat(in, inn);
    delete [] inn;
    for (int i = 1; i < size; i++)
    {
        cin>>tool;
        strcat(in,tool);
    }
    delete [] tool;
    size=strlen(in);
    cout<<sqrt(size)<<' ';
    for (int i=0; i<size; i++)
    {
        if (*(in+i)==*(in+i+1))
        {
            cnt++;
        }
        else
        {
            cout<<cnt<<' ';
            cnt=1;
        }
    }
    return 0;
}
