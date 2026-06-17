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

  cout<<((a>b&& a>c)?"the greatest no is ": (b>a&& b>c)?"the greatest no. is ":"the greatest no. is ");
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



















