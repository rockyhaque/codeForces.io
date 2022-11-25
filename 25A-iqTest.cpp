//#include<bits/stdc++.h>

#include<iostream>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r", stdin);
		freopen("output.txt","w", stdout);
	#endif

		int arr[101];
		int n, i, ans;
		int ec = 0, oc = 0;
		cin>>n;

		for(i = 1; i <= n; i++){
			cin>>arr[i];
		}
		for(i = 1; i <= n; i++){
			if(arr[i]%2 == 0){
				ec++;
			} else{
				oc++;
			}
		}

		// cout<<"Evens = "<< ec <<" Odds = "<<oc;

		if(ec == 1){
			for(i = 1; i <= n; i++){
				if(arr[i]%2 == 0){
					ans = i;
					break;
				}
			}

		} else{
			for(i = 1; i <= n; i++){
				if(arr[i]%2 != 0){
					ans = i;
				}
			}
		}

		cout<<ans;
	
	return 0;
}
