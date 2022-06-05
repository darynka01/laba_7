#include "Header.h"
int ReadFromFile(string f_name,stack <string> STACK)
{
    const int size = 10;
    char str[size + 1];
    ifstream fin(f_name);
    if (!fin)
    {
        cout << "\nFile " << f_name << " is not found\n";
        return 1;
    }
    string s;
    while (fin) {
        fin >> s;
        STACK.push(s);
    }
}
void printStack(stack <string> STACK) {

}