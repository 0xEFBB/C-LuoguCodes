#include <iostream>
using namespace std;
bool road[10005];
int main(){
    int n,m,u,v,cnt=0;
    cin>>n>>m;
    n+=1;
    for (int i=0; i<m; i++) {
        cin>>u>>v;
        for (int j=u; j<=v; j++) {
            road[j]=1;
        }
    }
    for (int i=0; i<n; i++) {
        if (!road[i]) {
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}
