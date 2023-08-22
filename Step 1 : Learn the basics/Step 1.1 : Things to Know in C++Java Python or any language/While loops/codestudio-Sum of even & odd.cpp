#include<iostream>
using namespace std;

int main() {

  int evSum=0 ,odSum =0,n;
	cin>>n;
	while(n>0){
		int last = n%10;
		if(n&1){
			odSum+=last;
		}
		else{
			evSum+=last;
		}
		n/=10;
	}
	cout<<evSum<<" "<<odSum;
}
