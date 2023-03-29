#include <iostream>
using namespace std;

void main() {
	float V = 3;
	float I = 0.020;
	float R = 150;
	int num = 16;
	int real_num;
	int i;

	for (i = 0; i < 5; i++)
	{
		real_num = num / 2;
		num = real_num;
		float numnum = V/real_num;
		cout << numnum <<" and " << numnum * numnum / R << endl;

	}
	
}