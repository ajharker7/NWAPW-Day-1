#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void displayQuestions();
void takeTest();

int main(){
    displayQuestions();
}

void displayQuestions(){
    string line;
    ifstream myfile("Questions");
    if(myfile.is_open()){
        while(getline (myfile,line)){
            cout << line << endl;
        }
        myfile.close()
    }
    else{
        cout << "Unable to open file" << endl;
    }
}

void takeTest(){

    string answer1 = "6";
    string answer1 = "7";
    string answer1 = "7.6 billion";
    string answer1 = "58.4 g/mol";
    string answer1 = "Hola";

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
