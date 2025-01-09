#include <iostream>

using namespace std;

int main(){
    int n;

    cout << "Enter The Number :- " <<endl;
    cin >> n;

    if (n == 0)
    {
       cout << "It's A Neutral Number ! " <<endl;

    }else if(n > 0){
        cout << "It's A Postive Number ! " <<endl;
    }else{
        cout << "It's A Negative Number ! " <<endl;
    }
    

    return 0;
}