#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int order[n];
    scanf("x%d",&order[0]);
    for (int  i = 1; i < n; i++)
    {
        getchar();
        scanf("x%d",&order[i]);
    }
    for (int i = 0; i < n; i++)
    {
        cout<<order[i]<<' ';
    }
    
    return 0;
}