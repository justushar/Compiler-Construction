#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream inputFile("TEST.txt");
    ofstream outputFile("output.txt");
    int ctr=0;
    if (inputFile.is_open() && outputFile.is_open()) 
    {
        char ch;
        while (inputFile.get(ch)) {  
            cout<<ch;   
            outputFile << ch;
            if(ch == ' ')
            {
                ctr++;
            }
        }
        inputFile.close();
        outputFile.close();
        cout << "File copied successfully." << endl;
        cout<<ctr;
    }
    else 
    {
        cout << "Failed to open the files." << endl;
    }

    return 0;
}
