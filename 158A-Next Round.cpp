#include <iostream>
using namespace std;
int main(){
  int n, k, i, arr[55], ans = 0;
  
  cin>>n>>k;
  for(i = 1; i <= n; i++){
    cin>>arr[i];
  }
  
  for(int i = 1; i <= n; i++){
    if(arr[i] >= arr[k] && arr[i] > 0)
      ans++;
  }
  
  cout<<ans;
  return 0;
}
