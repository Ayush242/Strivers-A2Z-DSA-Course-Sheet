A
AB
ABC
ABCD
ABCDE

void printTriangle(int n) {
        // code here
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                char ch = 'A'+j-1;
                cout<<ch;
            }
            cout<<endl;
        }
    }
