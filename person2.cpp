#include <iostream>
#include <string>
#include <fstream>

int main()
{
    using namespace std;

    ifstream file("file.txt");
    if(file.is_open())
    {
        string myArray[5];

        for(int i = 0; i < 5; ++i)
        {
            file >> myArray[i];
        }
    }

}
