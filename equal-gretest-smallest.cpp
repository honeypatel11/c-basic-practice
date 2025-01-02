#include <iostream>

using namespace std;


int main(){
    int a , b;

    cout << "Enter The Value A :- " <<endl;
    cin >> a;

    cout << "Enter The Value B :- " <<endl;
    cin  >> b;


    if (a == b)
    {
       cout << "It's Equal  ! " <<endl;

    }else if(a > b){
        cout << "It's A Is Biggest ! " <<endl;
    }else{
        cout << "It's B Is Biggest ! " <<endl;
    }
    
    return 0;
}