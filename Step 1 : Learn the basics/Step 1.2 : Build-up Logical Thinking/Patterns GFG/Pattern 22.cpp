4 4 4 4 4 4 4
4 3 3 3 3 3 4
4 3 2 2 2 3 4
4 3 2 1 2 3 4
4 3 2 2 2 3 4
4 3 3 3 3 3 4
4 4 4 4 4 4 4


void printSquare(int n) {
        // code here
    for(int i=1;i<=n;i++){
        int k = n;
        for(int j=1;j<i;j++){
            cout<<k--<<" ";
        }
        for(int j=1;j<=2*(n-i)+1;j++){
            cout<<k<<" ";
        }
        k++;
        for(int j=1;j<i;j++){
            cout<<k++<<" ";
        }
        cout<<endl;
    }
    for(int i=n-1;i>=1;i--){
        int k = n;
        for(int j=1;j<i;j++){
            cout<<k--<<" ";
        }
        for(int j=1;j<=2*(n-i)+1;j++){
            cout<<k<<" ";
        }
        k++;
        for(int j=1;j<i;j++){
            cout<<k++<<" ";
        }
        cout<<endl;
    }
}
  
