#include <iostream>

using namespace std;

int main(){

int n;
bool isprime = true;

cout << "Enter The Number Is :- " ;
cin >> n;

if (n <= 1){
  isprime = false;
}
for (int i = 2; i <= n; i++){
   if (n % i == 0){
   isprime = false;
   break;  
   }
   
}
if (isprime){
    cout << "It's A Prime Number ! ";
}else{
    cout << "It's A Not A Prime Number ! ";
}
    return 0;
}
// 7 % 2 != 0 = prime number
// 10 % 2 == 0 = not a prime number