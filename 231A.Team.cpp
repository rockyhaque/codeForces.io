#include <iostream>
using namespace std;

int main(){
  int n, a, i, j, counter;
  int solved = 0;
  cin>>n;
  for(i = 0; i < n; i++){
    counter = 0;
    for(j = 0; j < 3; j++){
      cin>>a;
      counter += a;
    }
    if(counter >= 2)
      solved++;
  }
  cout<<solved<<"\n";
}
