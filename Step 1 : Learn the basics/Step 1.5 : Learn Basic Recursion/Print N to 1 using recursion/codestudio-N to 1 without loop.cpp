vector<int> loop(int n, vector<int>& v){
    if(n==0){
        return v;
    }
    v.push_back(n);
    return loop(n-1, v);
}

vector<int> printNos(int x) {
    // Write Your Code Here
    vector<int> v;
    return loop(x,v);
}
