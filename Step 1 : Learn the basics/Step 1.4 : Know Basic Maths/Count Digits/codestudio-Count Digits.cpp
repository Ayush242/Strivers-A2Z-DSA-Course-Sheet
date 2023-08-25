int countDigits(int n){
	// Write your code here.
	int count = 0;
	int num = n;
	while(n>0){
		int last = n%10;
		if(last!=0 && num%last==0 ){
			count++;
		}
		n/=10;
	}	
	return count;
}
