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


// Alternative
int countDigits(int n)
{
    // Initializing 'cur' and 'ans'.
    int cur = n, ans = 0;

    // Iterating while 'cur' > 0.
    while (cur > 0)
    {
        // 'd_0' gives us the digit at 'ones' place decimal notation of 'cur'.
        int d_0 = cur % 10;
        if (d_0 != 0)
        {
            // Incrementing 'ans' by 1 if current digit divides 'n' evenly.
            ans += (n % d_0) == 0;
        }
        cur /= 10;
    }
    return ans;
}
