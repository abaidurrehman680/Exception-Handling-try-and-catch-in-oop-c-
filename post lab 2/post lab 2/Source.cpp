#include<iostream>
using namespace std;
class calculate {
private:
	int aa;
	int bb;
public:
	calculate(){}
	int co = 0;
	calculate(int a, int b) {
		aa = a;
		bb = b;
		
		try {
			if (aa < 0 || bb <=0) {
				throw("both values should be positive and 2nd number should be greater than 0");
			}
			else {
				co++;
			}
		}
		catch (const char* msg) {
			cerr << msg << endl;
		}
	}
	void summation() {
		int sum;
		sum = aa + bb;
		try {
			if (sum >= 20) {
				throw("sum does not equal and greater than 20");
			}
			else {
				cout << "sum is equal to = "<<sum;
			}
		}
		catch (const char* sm) {
			cerr << sm << endl;
		}
	}
	void product() {
		int pr;
		pr = aa * bb;
		try {
			if (pr >= 20) {
				throw("product of 2 numbers should not equal to 20");
			}
			else {
				cout << "product is equal to = "<<pr;
			}
		}
		catch (const char* pro) {
			cerr << pro << endl;
		}
	}
	void divrem() {
		int div;
		int rem;
		div = aa / bb;
		rem = aa / bb;
		cout << "division is= " << div;
		cout << "\nrem is= " << rem;
	}
};
int main() {
	int a, b;
	cout << "enter the 1st number= ";
	cin >> a;
	cout << endl;
	cout << "enter the 2nd number= ";
	cin >> b;
	calculate c(a,b);
	if (c.co==1){
		c.summation();
		cout << endl;
		c.product();
		c.divrem();

	}
	else {
		cout << "press any key to enter again" << endl;
		cin.get();
		cin.get();
		system("cls");
		main();
	}
	
	return 0;
}