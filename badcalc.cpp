#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int calcmode;
    double num1 = 0;
    double num2 = 0;
    cout << "Please specify what you want to do:\n---------------------------------------------------\n|1.Multiply|2.Divide|3.Add|4.Subtract|5.SquareRoot|\n---------------------------------------------------\n";
    cin >> calcmode;
    if (calcmode == 1) {
        cout << "Please enter two numbers to multiply by together.\n";
        cin >> num1 >> num2;
        cout << num1 << " * " << num2 << " = " << num1*num2 << ".\n";}
    if (calcmode == 2) {
        cout << "Please enter two numbers to divide by eachother by.\n";
        cin >> num1 >> num2;
        cout << num1 << " / " << num2 << " = " << num1/num2 << ".\n";}
    if (calcmode == 3) {
        cout << "Please two numbers to add to eachother.\n";
        cin >> num1 >> num2;
        cout << num1 << " + " << num2 << " = " << num1+num2 << ".\n";}
    if (calcmode == 4) {
        cout << "Please enter two numbers to subtract by eachother.\n";
        cin >> num1 >> num2;
        cout << num1 << " - " << num2 << " = " << num1-num2 << ".\n";}
    if (calcmode == 5) {
        cout << "Please enter a number to get the square root of\n";
        cin >> num1;
        cout << "The Square Root of " << num1 << " is " << sqrt(num1) << "\n";}
    else {
        cout << "Please enter a valid calculator action.\n";}                                           
    return 0;
}
