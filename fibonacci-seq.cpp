#include <iostream>

using namespace std;

int main(){
    int n, a = 0 , b = 1, c;

    cout << "Enter n :- ";
    cin  >> n;

   cout << "Fibonacci Is " <<  a  << " " << b << " ";

   for (int i = 3; i <= n; i++){
   c = a+b;
   cout << c << " ";
   a = b;
   b = c;
   }
   cout << endl;
    return 0;
}