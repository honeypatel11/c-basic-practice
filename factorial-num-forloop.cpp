#include<iostream>
using namespace std;

int main(){
    int n, fact = 1;

    cout << "Enter The Number :- " <<endl;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    cout << "Factorial Number Is :- " << fact <<endl;
    

    return 0;
}