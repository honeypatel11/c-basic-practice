#include <iostream>

using namespace std;

int main(){
    int year;

    
    cout << "Enter The Number :- " <<endl;
    cin >> year;

    if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
        cout << "It's A Leap Year !" <<endl;
    }else {
        cout << "It's Not A Leap Year !"<<endl;
    }

    return 0;
}