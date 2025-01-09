#include <iostream>

using namespace std;


int main(){
    int n,fact = 1;

    cout << "Enter The Number :- ";
    cin  >> n;

    while (n > 0)
    {
       fact = n * fact;
       n--;
    }
    cout << "Factorial Is :- " << fact <<endl;

    return 0;
}