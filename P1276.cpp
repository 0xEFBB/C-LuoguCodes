#include <iostream>
using namespace std;
int road[10005];
int main(){
    int n,m,u,v,cnt[2]={0};
    bool flag;
    cin>>n>>m;
    n+=1;
    for (int i=0; i<m; i++) {
        cin>>flag>>u>>v;
        if (!flag)
        {
            for (int j=u; j<=v; j++) {
                if (road[j]==2)
                {
                    cnt[1]++;
                }
                
                road[j]=1;
            }
        }
        else
        {
            for (int j = u; j <= v; j++)
            {
                if (road[j]==1)
                {
                    road[j]=2;
                }
            }
            
        }
    }
    for (int i=0; i<n; i++) {
        if (!road[i]) {
            cnt[0]++;
        }
    }
    cout<<cnt[0]<<' '<<cnt[1];
    return 0;
}
