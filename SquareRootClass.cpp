#include <iostream>
#include <cmath>

using namespace std;

class Square {
public:
	const int a;
	const int b;
	const int c;
	int D; double x1; double x2;
	Square(int a2, int b2, int c2) :a(a2), b(b2), c(c2)
	{}
	void findD() {
		D = pow(b, 2) - 4 * a*c;
		printf("%d^2 - 4*%d*%d = %d\n", b, a, c, D);
	}
	void findX() {
		x1 = (-b + sqrt(D)) / (2 * a);
		printf("(-%d + #%d)/2*%d = %f\n", b, D, a, x1);
		if (D != 0) {
			x2 = (-b - sqrt(D)) / (2 * a);
			printf("(-%d - #%d)/2*%d = %f\n", b, D, a, x2);
		}
	}
	void printAnswer() {
		if (D != 0) {
			printf("Discr = %d, x1 = %f, x2 = %f\n", D, x1, x2);
		}
		else {
			printf("Discr = %d, x = %f\n", D, x1);
		}
	}
};

int main()
{
	Square *mySquare = new Square(2, 8, 8);
	mySquare->findD();
	mySquare->findX();
	mySquare->printAnswer();
	Square *mySquare2 = new Square(1, 6, 8);
	mySquare2->findD();
	mySquare2->findX();
	mySquare2->printAnswer();
	return 0;
}