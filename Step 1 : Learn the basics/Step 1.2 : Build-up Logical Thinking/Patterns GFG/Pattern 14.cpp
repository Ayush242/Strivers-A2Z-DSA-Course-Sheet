A
AB
ABC
ABCD
ABCDE

void printTriangle(int n) {
        // code here
        for(int i=1;i<=n;i++){
            char ch = 'A';
            for(int j=1;j<=i;j++){
                cout<<ch++;
            }
            cout<<endl;
        }
    }

// Alternative Solution
for(int i=0;i<N;i++){
  for(char ch = 'A'; ch<='A'+i;ch++){
      cout<<ch<<" ";
  }
  cout<<endl;
}
