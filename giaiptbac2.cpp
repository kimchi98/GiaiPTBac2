#include<iostream>
#include<cmath>
using namespace std;

void GiaiPTB2(double a, double b, double c, unsigned int&n, double&x1, double&x2){
	if (a == 0){
		if (b == 0){
			if (c == 0){
				n = -1;
			}
			else{
				n = 0;
			}
		}
		else{
			n = 1;
			x1 = x2 = -c / b;
		}
	}
	else{
		double d = b*b - 4 * a*c;
		if (d < 0){
			n = 0;
		}
		else if (d == 0){
			n = 1;
			x1 = x2 = -b / (2 * a);
		}
		else{
			n = 2;
			x1 = (-b + sqrt(d)) / (2 * a);
			x2 = (-b - sqrt(d)) / (2 * a);
		}
	}
}

int main(){
	double a, b, c;
	unsigned int n;
	double x1, x2;
	cin >> a >> b >> c;
	GiaiPTB2(a, b, c, n, x1, x2);
	if (n == -1){
		cout << "PT vo so nghiem"<<endl;
	}
	else if (n == 0){
		cout << "PT vo nghiem" << endl;
	}
	else if (n == 1){
		cout << "PT co 1 nghiem kep" << endl;
		cout << "x1 = x2 = " << x1;
	}
	else{
		cout << "PT co 2 nghiem phan biet" << endl;
		cout << "x1 = " << x1 << endl;
		cout << "x2 = " << x2 << endl;
	}
	return 0;
}