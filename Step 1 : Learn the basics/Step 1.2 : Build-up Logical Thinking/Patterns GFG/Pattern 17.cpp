   A
  ABA
 ABCBA
ABCDCBA

void printTriangle(int n) {
        // code here
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n-i;j++){
                 cout<<" ";
             }
            char ch='A';
            for(int j=1;j<=i;j++){
                cout<<ch++;
            }
            ch-=2;
            for(int j=1;j<i;j++){
                cout<<ch--;
            }
            cout<<endl;
        }
  }
