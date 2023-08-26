bool palindrome(int n)
{
    // Write your code here
    int num =n,rev=0;
    while(n>0){
        int last = n%10;
        rev = rev*10+last;
        n/=10;
    }
    return rev==num;
}
