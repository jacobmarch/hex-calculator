#include <iostream>
#include <fstream>
#include <string>

using namespace::std;

ifstream myFile;
char current;
char hex1[40];
char hex2[40];
char solution[40];
int i = 0;
bool isSecond = false;

int hexToDecimal(string hex){

}

int decimalToHex(int decimal){

}

int main() {
    myFile.open ("input.txt");
    if(!myFile.eof()){
        cerr << "Error: Did not access file properly" << endl;
        exit(1);
    }
    while (current != '+' || '-' || '*' || '/' || '$') {
        myFile >> hex1[i];
    }


}