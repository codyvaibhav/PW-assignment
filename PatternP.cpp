#include <iostream>
using namespace std;

int main(){
    int m;
    cout<<"enter value of m: \n";
    cin>>m;
    int n = m-1;
    

     for (int i=1;i<=2*m-1;i++){
        cout<<"* ";}
        cout<<endl;

    int nsp = 1;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n-i+1;j++){
            cout<<"* ";
        }
        for (int j=1;j<=nsp;j++){
            cout<<"  ";
            
        }  nsp+=2;
        for (int j=1;j<=n+1-i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }    
    return 0;
}