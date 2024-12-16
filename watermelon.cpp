#include<bits/stdc++.h>

using namespace std;

int main() {
	int n;
	while(true) {
		cin>>n;
		if(n<1||n>100){
			cout<<"INVANID INPUT"<<endl;
		} else{
			break;
		}
	}

	if(n%2!=0) {
		cout<<"NO"<<endl;
	} else {
		cout<<"YES"<<endl;
	}
}
