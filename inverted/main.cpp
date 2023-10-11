//Floyd's Triangle

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=1;

    for(int i=1; i<=n; i++){
        for(int j=i; j>=1; j--){

            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }

    return 0;
}

/*/half pyramid using numbers
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1; i<=n;i++){
        for(int j=i; j>=1; j--){
            cout<<i<<" ";

        }
        cout<<endl;
    }
    return 0;
}



/*#include<iostream>
using namespace std;
int main()
{
   int n;
   cin>>n;
   for(int i=1;i<=n; i++){
    for(int j=1; j<=n; j++){
        if(j<=n-i){
            cout<<" ";
        }
        else{
            cout<<"* ";
        }
    }
    cout<<endl;
   }
    return 0;
}

*/
/*/pyramid
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=i;j>=1;j--){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}










/*#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=n; i>=1; i--){
        for(int j=1; j<=i; j++){

                cout<<"*";
            }
            cout<< endl;
        }
        return 0;
    }
    */



