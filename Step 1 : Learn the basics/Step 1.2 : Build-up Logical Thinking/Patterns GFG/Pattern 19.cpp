**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********

void printTriangle(int n) {
        // code here
        for(int i=n;i>=1;i--){
            if(i==n){
                for(int j=1;j<=2*n;j++){
                    cout<<"*";
                }
            }else{
                for(int j=1;j<=i;j++){
                    cout<<"*";
                }
                for(int j=1;j<=2*(n-i);j++){
                    cout<<" ";
                }
                for(int j=1;j<=i;j++){
                    cout<<"*";
                }
            }
            cout<<endl;
        }
        for(int i=1;i<=n;i++){
            if(i==n){
                for(int j=1;j<=2*n;j++){
                    cout<<"*";
                }
            }else{
                for(int j=1;j<=i;j++){
                    cout<<"*";
                }
                for(int j=1;j<=2*(n-i);j++){
                    cout<<" ";
                }
                for(int j=1;j<=i;j++){
                    cout<<"*";
                }
            }
            cout<<endl;
        }
    }
