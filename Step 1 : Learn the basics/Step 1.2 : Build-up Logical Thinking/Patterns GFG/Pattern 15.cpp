ABCDE
ABCD
ABC
AB
A

void printTriangle(int n) {
        // code here
        for(int i=1;i<=n;i++){
            for(char j='A';j<='A'+n-i;j++){
                cout<<j;
            }
            cout<<endl;
        }
  }
