#include <iostream>
using namespace std;
int main(){
    int n,m,s;
    while(cin>>s>>n>>m){
        int a[2000],b[2000],ans=-1;
        for(int i=0; i<n; i++) cin>>a[i];
        for(int i=0; i<m; i++) cin>>b[i];
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(a[i]+b[j]<=s){
                    ans=max(ans,a[i]+b[j]);
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}