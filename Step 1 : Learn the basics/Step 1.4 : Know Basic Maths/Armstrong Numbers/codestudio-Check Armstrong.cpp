bool checkArmstrong(int n){
	//Write your code here
	int len = log10(n) + 1; // calculate length
	int num=n,sum=0;
	while(n){
		int last = n%10;
		sum+= pow(last,len);
		n/=10;
	}
	return num==sum;
}
