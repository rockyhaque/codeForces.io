//#include<bits/stdc++.h>

#include<iostream>
using namespace std;


int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r", stdin);
		freopen("output.txt","w", stdout);
	#endif

	int n;
  	cin>>n;
  	string s;
  	while(n--){

      cin>>s;
    
      if(s.length() > 10){
      cout<<s[0]<<s.length()-2<<s[s.length()-1]<<"\n";
    } else{
      cout<<s<<"\n";
    }
  }
	
	return 0;
}
