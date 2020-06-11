#include <iostream>
#include <string>
#include <regex>

using namespace std;

ostream &endll(ostream &out)
{
    out << endl << endl;
    return out;
}

int main(int argc, char** args)
{
    int var;
    string input;
    cmatch result;
    regex regular("^-?\\d+$");

    do {
        cout << "Enter integer value: ";
        getline(cin, input);
        if(regex_match(input.c_str(),result,regular))
        {
            var = stoi(input);
            cout << "Good! you entered " << var << endll;
            break;
        }
        else
        {
            cout << "Incorrect input,  try again." << endll;
        }
    }while(true);



    return 0;
}
