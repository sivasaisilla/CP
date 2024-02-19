//wrong

#include<bits/stdc++.h>
using namespace std;

int main(){

  int n;
  cin>>n;

for(int i=0;i<n;i++){

 int x;
 cin>>x;

 int modn = x%9;
 int quon = x/9;

 int sum = quon*45+ (modn*(modn+1))/2;

 cout<<sum<<endl;

}

  return 0;
}

