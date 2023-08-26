long reverseBits(long n) {
    // Write your code here.
  long ans=0;
  for(int i=0;i<32;i++){
      ans<<=1; // we are doing it before, say we are at 31st bit now we if do << operator, it will overflow
              // so we are doing it before adding 
      ans+= n&1;
      n>>=1;
  }
  // O(1) - time complexity since loop doesn't depend on input
  return ans;
}
