#include <iostream>


using namespace std;

int main(){
    int n,rev = 0;

    cout << "Enter The Number :- " <<endl;
    cin >> n;

    while (n > 0)
    {
      int num = n%10;
      rev = rev * 10 + num;
      n = n/10;
    }
    cout << rev;
    


    return 0;
}
//1234
// 1234 % 10 = 4
// 0 * 10 + 4 = 4
// 1234/10 = 123

//123
//123 % 10 = 3
//4 * 10 + 3 = 43
// 123/10 = 12

//12
//12 % 10 = 2
//43 * 10 + 2 = 432
// 12/10 = 1

//1
//1%10 = 1
// 432 * 10 + 1 = 4321
// 1/10 = 0