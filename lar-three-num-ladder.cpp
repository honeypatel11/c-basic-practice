#include <iostream>

using namespace std;


int main(){
    int a , b, c;

    cout << "Enter The Value A :- " <<endl;
    cin >> a;

    cout << "Enter The Value B :- " <<endl;
    cin  >> b;

    cout << "Enter The Value C :- " <<endl;
    cin >> c;
    
    
    if (a >= b && a >= c ){
       cout << "It's Biggest A Number  ! " << a  <<endl;

    }
    else if ( b >= a && b >= c)
    {
        cout << "It's Biggest B Number ! " << b <<endl;
    }else {
        cout << "It's Biggest c Number ! " << c <<endl;
    }
    
    return 0;
}