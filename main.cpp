#include <iostream>
#include <fstream>
#include <string>

using namespace::std;

ifstream inFile;
ofstream outFile;
char current;
char hex1[40];
char operationDone;
int num1 = 0;
char hex2[40];
int num2 = 0;
char solution[40];
int i = 0;
bool isSecond = false;

void fillHexArrays(){
    inFile.open("input.txt");

}

void hexToDecimal(char hex[], int numToChange[]){
    for (int j = 0; j < 40; j++){
    switch (hex[j]) {
        case '1':
            numToChange[j] += 1;
            break;
        case '2':
            numToChange[j] += 2;
            break;
        case '3':
            numToChange[j] += 3;
            break;
        case '4':
            numToChange[j] += 4;
            break;
        case '5':
            numToChange[j] += 5;
            break;
        case '6':
            numToChange[j] += 6;
            break;
        case '7':
            numToChange[j] += 7;
            break;
        case '8':
            numToChange[j] += 8;
            break;
        case '9':
            numToChange[j] += 9;
            break;
        case '0':
            numToChange[j] += 0;
            break;
        case 'A':
            numToChange[j] += 10;
            break;
        case 'B':
            numToChange[j] += 11;
            break;
        case 'C':
            numToChange[j] += 12;
            break;
        case 'D':
            numToChange[j] += 13;
            break;
        case 'E':
            numToChange[j] += 14;
            break;
        case 'F':
            numToChange[j] += 15;
            break;
        default:
            break;
        }
    }
}
void convertToHex(int input){
    
    
}
int main () {


    return 0;
}