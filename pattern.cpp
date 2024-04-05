#include <iostream>
using namespace std;

int main(){
    int n;
  cout<<"enter value of n: "<<endl;
    cin>>n;

    for(int i=1;i<=2*n-1;i++){
        for(int j=1;j<=2*n-1;j++){    
           for(int k=0;k<n;k++){
          if((i==n-k||i==1+k) && (j==n-k||j==1+k))
            
        //   if(j==n-k||j==1+k) 
            cout<<n-k;

        //   if(i==(n-1 ||2) || j==(n-1 ||2))
        //   cout<<n-1;  

        //   if(i==(n-2 ||3) || j==(n-2 ||3))
        //   cout<<n-2;

          if(i==j)
          cout<<"1";
           }
        }
        cout<<endl;
    }
   
    

  return 0;  
}