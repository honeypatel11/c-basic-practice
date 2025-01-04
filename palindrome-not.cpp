#include <iostream>


using namespace std;

int main(){
    int n,rev = 0,palindrome;

    cout << "Enter The Number :- " <<endl;
    cin >> n;

    palindrome = n;

    while (n > 0)
    {
      int num = n%10;
      rev = rev * 10 + num;
      n = n/10;
    }

    cout << endl;

    if ( palindrome == rev )
    {
      cout << "It's A Palindrome ! " <<endl;
    }else {
        cout << "It's A Not Palindrome ! " <<endl;
    }
    
    return 0;
}