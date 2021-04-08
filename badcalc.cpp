#include <iostream>                   
#include <cmath>                      //includes the cmath library so I can easily do exponents and square roots
using namespace std;
int main() {
    int calcmode = 0;                 //declares a integer varible with the name calcmode, decides what should be done (multipliction, division, etc.)
    double num1 = 0;                  //declares an floating point variable with the name num1
    double num2 = 0;                  //declares an floating point variable with the name num2
    cout << R"( ___    __    ___   __     __    _     __   
| |_)  / /\  | | \ / /`   / /\  | |   / /`  
|_|_) /_/--\ |_|_/ \_\_, /_/--\ |_|__ \_\_, )" << '\n';
    cout << "--------------------------------------------------------------\n|1.Multiply|2.Divide|3.Add|4.Subtract|5.SquareRoot|6.Exponent|\n--------------------------------------------------------------\n";
    cin >> calcmode;
    if (calcmode == 1) {
        cout << "Please enter two numbers to multiply by together.\n";
        cin >> num1 >> num2;          //reads 1 floating point values into num1 and num2
        cout << num1 << " * " << num2 << " = " << num1*num2 << "\n";}  //instead of using another floating point value and namin it ans I just took out the ans and just made it solve the problem in the answer statement  
    if (calcmode == 2) {
        cout << "Please enter two numbers to divide by eachother by.\n";
        cin >> num1 >> num2;          //reads 1 floating point values into num1 and num2 each
        cout << num1 << " / " << num2 << " = " << num1/num2 << "\n";}
    if (calcmode == 3) {
        cout << "Please enter two numbers to add to eachother.\n";
        cin >> num1 >> num2;          //reads 1 floating point value into num1 and num2 each
        cout << num1 << " + " << num2 << " = " << num1+num2 << "\n";}
    if (calcmode == 4) {
        cout << "Please enter two numbers to subtract from eachother.\n";
        cin >> num1 >> num2;          //reads 1 floating point values into num1 and num2 each
        cout << num1 << " - " << num2 << " = " << num1-num2 << "\n";}
    if (calcmode == 5) {
        cout << "Please enter a number to get the square root of.\n";
        cin >> num1;                  //reads 1 floating point value into num1
        cout << "The Square Root of " << num1 << " is " << sqrt(num1) << ".\n";}
    if (calcmode == 6) {
        cout << "Please enter the base and exponent.\n";
        cin >> num1 >> num2;          //reads 1 floating point value into num1 and num2 each
        cout << num1 << " ^ " << num2 << " = " << pow(num1, num2) << "\n";}
    else if (calcmode > 6 || calcmode < 1) {
        cout << "Please enter a valid calculator action.\n";}    //puts out text telling them to enter a valid mode if they didn't type a valid number, not sure if this is a good way to do it.                                      
    return 0;}
