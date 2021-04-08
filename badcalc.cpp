#include <iostream>
int main()
{
    int calcmode;
    double num1 = 0;
    double num2 = 0;
    std::cout << "Please specify what you want to do:\n--------------------------------------\n|1.Multiply|2.Divide|3.Add|4.Subtract|\n--------------------------------------\n";
    std::cin >> calcmode;
    if (calcmode == 1) {
        std::cout << "Please enter two numbers to multiply by together.\n";
        std::cin >> num1 >> num2;
        std::cout << num1 << " * " << num2 << " = " << num1*num2 << ".\n";}
    if (calcmode == 2) {
        std::cout << "Please enter two numbers to divide by eachother by.\n";
        std::cin >> num1 >> num2;
        std::cout << num1 << " / " << num2 << " = " << num1/num2 << ".\n";}
    if (calcmode == 3) {
        std::cout << "Please two numbers to add to eachother.\n";
        std::cin >> num1 >> num2;
        std::cout << num1 << " + " << num2 << " = " << num1+num2 << ".\n";}
    if (calcmode == 4) {
        std::cout << "Please enter two numbers to subtract by eachother.\n";
        std::cin >> num1 >> num2;
        std::cout << num1 << " - " << num2 << " = " << num1-num2 << ".\n";}}
