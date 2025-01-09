#include <iostream>

using namespace std;

int main(){
    int n,even = 0, odd = 0;

    cout << "Enter The Value Of Number:- "<<endl;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
       if (i % 2 == 0)
       {
       even += i;
       }else{
            odd += i;
       }
       
    }
    cout << "Even Number Sum Is :- " << even <<endl;
    cout << "Odd Number Sum Is :- " << odd <<endl;

    return 0;
}