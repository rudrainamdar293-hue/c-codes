#include <iostream>
using namespace std;
int main(){
    int a ;
    cout<<"Entre a number = ";
    cin>>a;
    int sum = 0;
    for( int i = 1 ; i<=a; i++  ){
        sum+=i;
    }
    cout<<"hence the sum of the no. from 1 to "<<a<<endl;
    cout<<sum;
    return 0;
}