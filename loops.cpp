#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"Entre any no. = ";
    cin>>a;
    int i = 0;
    while(i <= 9){
      i++;  
        cout<<a<<"x"<<i<<"="<<a*i <<endl;
    }
return 0;
}
                              //  nested loops

#include <iostream>
using namespace std;
int main(){
  int a ;
  cout<<"entre a no. = ";
  cin>>a;
  for(int i = 0 ; i<=a; i++){
    for(int j =0 ; j<=a ; j++){
    cout<<"* ";
  }
  cout<<endl;
  }
  
  return 0;
} 


#include <iostream>
using namespace std;
int main(){
  int b ;
  cout<<"entre a no. = ";
  cin>>b;
  int a = 1 ;              // if you write this in a loop then the input value will be the last value in every row
  for(int i = 1 ; i<=b; i++){
     
    for(int j =1 ; j<=b ; j++){
    cout<<a << " ";
    a +=1;
    
  }
  cout<<endl;
  }
  
  return 0;
} 
                              //  triangle pattern

#include <iostream>
using namespace std;
int main(){
  int a ;
cout<<"entre a no = ";
cin>>a;
for(int i = 0; i<a ; i++){
  for(int j = 0; j<i+1 ; j++){
    cout<<i+1;
  }
  cout<<endl;
}
return 0;
}



#include <iostream>
    using namespace std;
    int main(){
         char ch = 'A';
         int n = 4;
       
        for( int i = 0; i<=n;i++){

            for( int j = 0; j<i+1; j++){
                cout<<ch;   
            }
            ch+=1;                                                                                          
            cout<<endl;
        }
       return 0;
    }






#include <iostream>
using namespace std;
int main(){
  int a = 7;
  
  for(int i = 0; i<=a -1; i++){
    for(int j = 1; j<i+1 ;j++){
     
      cout<<j;

    }
    cout<<endl;
  }
    return 0;
}


#include <iostream>
using namespace std;
int main(){
  int a = 7;
  
  for(int i = 0; i<=a -1; i++){
    for(int j = i+1; j>0 ;j--){
     
      cout<<j;

    }
    cout<<endl;
  }
    return 0;
}
                    // Floyd 's triangle

#include <iostream>
using namespace std;
int main(){
  char ch = 'A';
  for (int i = 0;i<=5 ; i++){
    for (int j = i+1 ; j>0;j--){
      cout<<ch;
      ch+=1;
    }
    cout<<endl;
  }
  return 0;
}