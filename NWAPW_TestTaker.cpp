#include<iostream>
using namespace std;

int main(){
    string userIn="garbage"; //Garbage value
    while(userIn != "test" and userIn != "create"){
        cout << "Type test to take the test." << endl;
        cout << "Type create to write a test problem." << endl;
        cin >> userIn;
    }
}
