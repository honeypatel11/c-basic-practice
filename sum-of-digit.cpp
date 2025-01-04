#include <iostream>

using namespace std;


int main(){
    int n,ans=0;

    cout << "Enter Your Number :- " <<endl;
    cin >> n;

    while (n > 0)
    {
       int sum = n%10;
       ans = ans+sum;
       n = n/10;
    }
    cout << "Sum Of Digit Num :- " <<ans <<endl;


    return 0;
}

//456
//456 % 10 = 6
// 0 = 0+6 = 6
// 456/10 = 45