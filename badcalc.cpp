#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int add(long double a, long double b) {
	long double ans;
	ans = a + b;
	return(ans);
}
int sub(long double a, long double b) {
	long double ans;
	ans = a - b;
	return(ans);
}
int mlt(long double a, long double b) {
	long double ans;
	ans = a * b;
	return(ans);
}
int div(long double a, long double b) {
	long double ans;
	ans = a/b;
	return(ans);
}
int sqr(long double b) {
	long double ans;
	ans = sqrt(b);
	return (ans);
}
int pwr(long double a, long double b) {
	long double ans;
	ans = pow(a,b);
	return (ans);
}
int main() {
	fstream hst;
	hst.open("hst.txt, ios::app");
	long double a,b;
	char clcmode;
	long double ans;
	while(cin >> a >> clcmode >> b)	{
	switch (clcmode){
		case '+':
			ans = add(a,b);
			cout << a << " + " << b << " = " << ans << '\n';
			hst << a << " + " << b << " = " << ans << '\n';
			break;
		case '-':
			ans = sub(a,b);
			cout << a << " - " << b << " = " << ans << '\n';
			hst << a << " - " << b << " = " << ans << '\n';
			break;
		case '*':
			ans = mlt(a,b);
			cout << a << " * " << b << " = " << ans << '\n';
			hst << a << " * " << b << " = " << ans << '\n';
			break;
		case '/':
			ans = div(a,b);
			cout << a << " / " << b << " = " << ans << '\n';
			hst << a << " / " << b << " = " << ans << '\n';
			break;
		case '^':
			ans = pwr(a,b);
			cout << a << " ^ " << b << " = " << ans << '\n';
			hst << a << " ^ " << b << " = " << ans << '\n';
			break;
		case 'r':
			ans = sqr(b);
			cout << "√" << b << " = " << ans << '\n';
			hst << "√" << b << " = " << ans << '\n';
			break;
		default:
			cout << "Invalid function used.\n"
				<< "Valid funtions:\n" 
				<< "+ = Add\n" << "- = Subtract\n"
				<< "* = Multiply\n"
				<< "/ = Divide\n"
				<< "^ = Power of...\n" 
				<< "r = Square Root of...\n"
				<< "Example: 5 * 5 or 5 / 5\n"
				<< "Be sure to put a value in from of r due to my limited coding skills\n";
			a = 0;
			b = 0;
			clcmode = ' ';
			break;
		}	
	}
 void close();
 return 0;
}
