//#include<bits/stdc++.h>

#include<iostream>
// #include<string.h>
using namespace std;


int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r", stdin);
		freopen("output.txt","w", stdout);
	#endif

		string s;
		cin>>s;
		s[0] = towupper(s[0]);
		cout<<s;
	
	return 0;
}
