#include <iostream>
using namespace std;
int main(){
    int a  ;
    cout<<"Entre a no. ";
    cin>>a;
    
    int sum = 0;
    for( int i =1 ; i<=a; i++  ){
        if( i % 2 !=0){
            cout<<i<< " ";
            sum+=i;
            
        }
    }
     cout<<"the sum of odd no. till  "<<a<<endl;
    cout<<sum;
    
    return 0;
}