#include<iostream>
#include<fstream>
using namespace std;

int main(){
    string userIn="garbage"; //Garbage value
    while(userIn != "test" and userIn != "create"){
        cout << "Type test to take the test." << endl;
        cout << "Type create to write a test problem." << endl;
        cin >> userIn;
    }
    if(userIn == "test"){
    //Put take the test here
        ifstream file("Questions.txt");
        if(file.is_open()) {
            string myArray[5];
            for(int i = 0; i < 5; ++i) {
                file >> myArray[i];
                cout << myArray[i];
            }
        }
    }
    else if(userIn == "create"){
        ofstream outfile("Questions.txt");
        cout << "Please enter your question\n> ";
        outfile.open("test.txt", std::ios_base::app);
        outfile << "Data";
        return 0;

    }



}
