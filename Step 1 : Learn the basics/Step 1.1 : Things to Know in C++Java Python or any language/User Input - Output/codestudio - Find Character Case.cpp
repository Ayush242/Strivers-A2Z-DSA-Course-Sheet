#include<iostream>
using namespace std;

int main() {
	// Write your code here
	char c;
	cin>>c;
	if(islower(c)){
		cout<<0;
	}
	else if(isupper(c)){
		cout<< 1;
	}
	else{
		cout<< -1;
	}
}

