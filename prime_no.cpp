#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"entre a no. = ";
    cin>>a;
    bool is_prime = true;
    
    for(int i = 2; i<a;i++){
        if( a%i==0){
             is_prime = false;
             break;
       
        }
    }
    if(is_prime==true){
        cout<<"the given no. is prime" <<endl;


    }else{
        cout<<"the given no. is not a prime "<<endl;
    }
    return 0;
    
}