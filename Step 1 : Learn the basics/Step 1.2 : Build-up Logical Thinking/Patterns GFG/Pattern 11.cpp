1 
0 1 
1 0 1
0 1 0 1 
1 0 1 0 1


void printTriangle(int n) {
        // code here
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                if((i+j)%2==0){
                    cout<<"1 ";
                } else{
                    cout<<"0 ";
                }
            }
            cout<<endl;
        }
  }

//Alternative
 for(int i=1; i<=n; i++)
{
    for(int j=i; j>0; j--)
    {
        cout<<j%2<<" ";
    }
    cout<<endl;
    
}
