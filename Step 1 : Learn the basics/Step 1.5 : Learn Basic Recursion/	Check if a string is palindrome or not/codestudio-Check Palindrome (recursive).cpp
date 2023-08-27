bool palin(int i,string& s){
    int n= s.size();
    if(i>=n/2){
        return true;
    }
    if(s[i]!=s[n-i-1]){
        return false;
    }
    return palin(i+1, s);
}

bool isPalindrome(string& str) {
    // Write your code here.
    return palin(0, str);
}
