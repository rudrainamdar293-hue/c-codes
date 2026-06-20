// #include <iostream>
// using namespace std;
//  int min(int a , int b){
//     if(a<b){
//         return a;
        
//     }else{
//         return b;
//     }

// }
//  int main(){
//    cout<<"the smallest no. is "<<min( 2 , 4);
//     return 0;
//  }


#include <iostream>
using namespace std;
void loop(){
    int sum = 0;
    int a; 
    cout<<"entre a no. = ";
    cin>>a;
    for (int i = 1; i<=a;i++){
        sum+=i;
       
    } cout<<"hence the sum of the no. from 1 to "<<a<<endl;
    cout<<sum;
}

int main(){
    char ch ;
    cout<<"just type  initial of yur name = ";
    cin>>ch;
    loop();
    return 0;
}