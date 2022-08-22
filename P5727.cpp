#pragma GCC optimize(2)
#include <iostream>
using namespace std;
int process[150];
int cnt;
int main(){
    int n;
    cin>>n;
    process[0]=n;
    while (n!=1)
    {
        if(n%2==0)
        {
            n/=2;
            cnt++;
            process[cnt]=n;
        }
        else
        {
            n=3*n+1;
            cnt++;
            process[cnt]=n;
        }
    }
    for (int i = 0; i < 1002; i++)
    {
        if (process[1001-i])
        {
            cout<<process[1001-i]<<' ';
        }
    }
    return 0;
}