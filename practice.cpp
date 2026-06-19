#include <iostream>
using namespace std;
int main(){
    int a  ;
    cout<<"Entre a no. ";
    cin>>a;
    
    int sum = 0;
    for( int i =1 ; i<=a; i++  ){
        if( i % 3 ==0){
           
            sum+=i;
            
        }
    }
     cout<<"the sum ofno.divisible by 3 till   "<<a<<endl;
    cout<<sum;
    
    return 0;
}

                                        // factorial
#include <iostream>
using namespace std;
int main(){
    int a ;
    cout<<"entre any no.";
    cin>>a;
    int fact = 1;
    for (int i = 1 ; i <=a ; i++){
        fact*=i;
    }
    cout<<"the factorial of the number"<<a<<endl;
    cout<<fact;
    return 0;

}