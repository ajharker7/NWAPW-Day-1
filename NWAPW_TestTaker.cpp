#include<iostream>
#include<fstream>
#include<vector>
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
        int currentQuestion = 0;
        string line1[30];
        if(file.is_open()) {
            while(!file.eof())
              {
                getline(file,line1[currentQuestion],'\n');
                cout<<"1."<<line1[currentQuestion]<<"\n";
              }
        }
    }

    else if(userIn == "create"){
        ofstream outfile("Questions.txt");
        cout << "Please enter your question\n> ";
        outfile.open("Questions.txt", std::ios_base::app);
        outfile << "Data";
        return 0;

    }
}
