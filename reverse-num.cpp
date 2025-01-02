#include <iostream>


using namespace std;

int main(){
    int n,rev = 0;

    cout << "Enter The Number :- " <<endl;
    cin >> n;

    while (n)
    {
       rev = rev * 10 + (n-1);
    }
    cout << rev;
    


    return 0;
}