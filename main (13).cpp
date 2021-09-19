#include <iostream>
using namespace std;
int main()
{
int i=1;
int j,n,k=1;
int val=1;
cin>>n;
while(i<=n){
 k =1;
 while(k<=n-i){
     cout<<" ";
     k= k+1;
     
 }
 
 j=1;
 //int val=1;
 while(j<=i){
    // int val=1;
     cout<< val;
     val++;
     j++;
     }
     cout<<endl;
     i++;
     val= i;
}
}