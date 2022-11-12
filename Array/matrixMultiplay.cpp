#include<iostream>
#define N 50
using namespace std;


int main(){
    int a[N][N],b[N][N],c[N][N],i,j,k,m,n,p,q;
    cin>>m>>n;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    cin>>p>>q;
    for(i=0;i<p;i++){
        for(j=0;j<q;j++){
            cin>>b[i][j];
        }
        
    }
    // for(i=0;i<m;i++){
    //     for(j=0;j<n;j++){
    //         cout<<a[i][j];
    //     }
    //     cout<<endl;
    // }
    // for(i=0;i<p;i++){
    //     for(j=0;j<q;j++){
    //         cout<<b[i][j];
    //     }
    //     cout<<endl;
    // }
    if(n!=p){
        cout<<"NO value"<<endl;
    }
    else{
        for(i=0;i<m;i++){
            for(j=0;j<q;j++){
                int sum=0;
                for(k=0;k<m;k++){
                    sum=sum+(a[i][k]*b[k][j]);
                }
                c[i][j]=sum;
            }
        }
        for(i=0;i<m;i++){
            for(j=0;j<q;j++){
                cout<<c[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}