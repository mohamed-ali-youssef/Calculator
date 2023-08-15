#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    string x = "0";
    string p = "+";
    double y = 0;
    Replay:
    system("clear");
    if(x == "+" || x == "-" || x == "*" || x == "/" || x == "r" || x == "x") { p = x; x = "0"; }
    cout << "Use the [ +  -  *  / ] operator. Or Reset [r] and Close [x]..\n";
    try
    {
        if(p == "+") {  y = y + stod(x); }
        else if(p == "-") { y = y - stod(x); }
        else if(p == "*") { if(stod(x) != 0) {y = y * stod(x);} }
        else if(p == "/") { if(stod(x) != 0) {y = y / stod(x);} }
        else if(p == "r") { x = "0"; y = 0; p = "+"; goto Replay; }
        else if(p == "x") { return 0; }
    }
    catch(const std::exception& e)
    { x = "0"; goto Replay; }
    cout << "Result : " << y << " " << p << " ";    
    cin >> x;
    goto Replay;
    return 0;
}
