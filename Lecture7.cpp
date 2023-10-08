#include<iostream>
using namespace std;

int main(){
    int password;
    cout << "Enter the password: ";

    //while loop
    // cin >> password;

    // while( password < 999999){
    //     cout  << "The password does not meet the required conditions, please enter the password again!" << endl;
    //     cout << "Enter the password: ";
    //     cin >> password;
    // }

    // cout << "The user has now enter the right password.";

    //do while loop
    // do{
    //     cin >> password;
        
    // } while (password < 999999);

    //infinite loop with condition to break
    // int count = 0;
    // while(1){
    //     cout << "Choclates " ;
    //     count++;

    //     if(count > 100) break;
    // }

    for(int i = 0; ; i++){
        cout << i << " ";
        if( i > 100 ) break; //executes and prints till 101
    }
    return 0;
}