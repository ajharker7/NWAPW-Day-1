#include<iostream>
#include<fstream>
#include<vector>
using namespace std;

void displayQuestions();
void takeTest();

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
        int currentQuestion = 1;
        string line1[30];
        if(file.is_open()) {
            while(!file.eof())
              {
                getline(file,line1[currentQuestion],'\n');
                cout<<currentQuestion<<". "<< line1[currentQuestion] << "\n";
              }
        }
        displayQuestions();
    }

    else if(userIn == "create"){
        ofstream outfile("Questions.txt");
        cout << "Please enter your question\n> ";
        outfile.open("Questions.txt", std::ios_base::app);
        outfile << "Data";
        return 0;

    }
    cout << "\n\nLife is a journey, not a destination.\n\n";
}

void displayQuestions(){
    string line;
    ifstream myfile("Questions");
    if(myfile.is_open()){
        while(getline (myfile,line)){
            cout << line << endl;
        }
        myfile.close();
    }
    else{
        cout << "Unable to open file" << endl;
    }
}

void takeTest(){

    string answer1 = "6";
    string answer2 = "7";
    string answer3 = "7.6 billion";
    string answer4 = "58.4 g/mol";
    string answer5 = "Hola";

    string input1;
    string input2;
    string input3;
    string input4;
    string input5;

    cout  << "What is the answer to question 1?" << endl;
    cin >> input1;

    if(input1 == answer1){
        cout << "Correct!" << endl;
    }

    cout << "What is the answer to question 2?" << endl;
    cin >> input2;

    if(input2 == answer2){
        cout << "Correct!" << endl;
    }

    cout << "What is the answer to question 3?" << endl;
    cin >> input3;

    if(input3 == answer3){
        cout << "Correct!" << endl;
    }

    cout << "What is the answer to question 4?" << endl;
    cin >> input4;

    if(input4 == answer4){
        cout << "Correct!" << endl;
    }

    cout << "What is the answer to question 5?" << endl;
    cin >> input5;

    if(input5 == answer5){
        cout << "Correct!" << endl;
    }
}
