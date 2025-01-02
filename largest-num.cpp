#include <iostream>

using namespace std;


int main(){
    int a , b;

    cout << "Enter The Value A :- " <<endl;
    cin >> a;

    cout << "Enter The Value B :- " <<endl;
    cin  >> b;

    if (a > b)
    {
      cout << "A Is Biggest Value ! " <<endl;
    }else{
        cout << "B Is Biggest Value ! " <<endl;
    }

    return 0; 
}