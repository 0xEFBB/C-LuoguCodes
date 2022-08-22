#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++){
        a.push_back(i);
    }
    for_each(a.begin(),a.end(),[](int x){cout<<x<<' ';});
    cout<<endl;
    random_shuffle(a.begin(),a.end());
    for_each(a.begin(),a.end(),[](int x){cout<<x<<' ';});
    cout<<endl;
    return 0;
}
