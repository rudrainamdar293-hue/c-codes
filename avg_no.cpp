#include <iostream>
using namespace std;

int main() {
    int a, b, c, d ,e ,f ,g ,h ,i ,j ;
    float sum = 0;
    int count = 0;
   cout<<"entre a no.= ";
    cin>>a;
    cout<<"entre another no.  = ";
    cin>>b;
    cout<<"entre another no.  = ";
    cin>>c;
    cout<<"entre another no.  = ";
    cin>>d;
    cout<<"entre another no.  = ";
    cin>>e;
    cout<<"entre another no.  = ";
    cin>>f;
    cout<<"entre another no.  = ";
    cin>>g;
    cout<<"entre another no.  = ";
    cin>>h;
    cout<<"entre another no.  = ";
    cin>>i;
    cout<<"entre another no.  = ";
    cin>>j;


    if (a != 0) { sum += a; count++; }
    if (b != 0) { sum += b; count++; }
    if (c != 0) { sum += c; count++; }
    if (d != 0) { sum += d; count++; }
    if (e != 0) { sum += e; count++; }
    if (f != 0) { sum += f; count++; }
    if (g != 0) { sum += g; count++; }
    if (h != 0) { sum += h; count++; }
    if (i != 0) { sum += i; count++; }
    if (j != 0) { sum += j; count++; }
    
    cout << "Average = " <<sum/count;
}