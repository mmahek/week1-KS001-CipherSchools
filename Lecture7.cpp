#include<iostream>
using namespace std;

int main(){
    int password;
    cout << "Enter the password: ";
    cin >> password;

    while( password < 999999){
        cout  << "The password does not meet the required conditions, please enter the password again!" << endl;
        cout << "Enter the password: ";
        cin >> password;
    }

    cout << "The user has now enter the right password.";
    return 0;
}