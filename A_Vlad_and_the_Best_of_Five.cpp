#include<bits/stdc++.h>
using namespace std;

int main(){

  int n;
  cin>>n;


  for(int i=0;i<n;i++){
    string x;
    cin>>x;
    int countA = count(x.begin(),x.end(),'A');
    int countB = count(x.begin(),x.end(),'B');

    if(countA>countB) cout<<"A"<<endl;
    else cout<<"B"<<endl;
  }



  return 0;
}