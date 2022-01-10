#include <iostream>
#include<stdlib.h>
using namespace std;


int main(int argc, char* argv[]) {

      
    //system can check if it is divisible by 4 but not by 100
    //unless it is also divisible by 400

    int x = strtol(argv[1], NULL, 10);

   
    if (x % 4 != 0) { cout << argv[1] << " was not a leap year" << endl;}
    else if (x % 100 != 0) { cout << argv[1] << " was a leap year" << endl;}
    else if (x % 400 != 0) { cout << argv[1] << " was not a leap year" << endl; }
    else { cout << argv[1] << " was a leap year" << endl; }

    return 0;
}

