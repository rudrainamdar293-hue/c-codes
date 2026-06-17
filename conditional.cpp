#include <iostream>
using namespace std;
int main(){
    int a ;
    cout<<"entre your 1st  no.  = ";
    cin>>a;

    int b ;
    cout<<"entre your 2nd no.  = ";
    cin>>b;
    
    int c ;
    cout<<"entre your 3rd no.  = ";
    cin>>c;

    if(a>b && a>c){

        cout<<" the greatest no. is "<<a;

    }else if (b>c && b>a){

        cout<<"the greatest no. is "<<b;


    }else{
        cout<<"the greatest no. is" <<c;
    }
    return 0; 
}


#include <iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Entre a charector = ";
    cin>>ch;
    cout<<(ch>='a'&& ch<='z'? "lowercase": "uppercase");
return 0;
}



















