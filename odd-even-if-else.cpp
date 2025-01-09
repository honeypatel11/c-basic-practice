#include <iostream>

using namespace std;

int main(){
    int n;

    cout << "Enter The Number :- " <<endl;
    cin >> n;

    if (n % 2 == 0)
    {
        cout << "It's A Even Number !" <<endl;
    }else{
        cout << "It's A Odd Number !" <<endl;
    }

    return 0;
}