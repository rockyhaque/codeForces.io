//#include<bits/stdc++.h>

#include<iostream>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r", stdin);
		freopen("output.txt","w", stdout);
	#endif

		int n, k;
		cin>>n>>k;

		for(int i = 1; i <= k; i++){
			if(n%10 == 0){
				n/=10;
			} else{
				n--;
			}
		}
  
		cout<<n;
	
	return 0;
}
