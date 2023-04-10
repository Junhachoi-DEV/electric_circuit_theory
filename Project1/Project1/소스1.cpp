#include <iostream>
using namespace std;

float temp;
float temp2;

float v = 24; //볼트 입력
//float v_t_value;


float r = 160; //저항 합 입력
//float r_t_value;


float result_i = v / r;
float lt; // 볼트 모를때

int num = 2; //몇번할지 //저항 개수
float rt[] = { 40, 120 };

float box_1;
float box_2;
float box_3;

void r_sum() {

	//float temp;
	cout << rt[0] << endl;
	temp = rt[0];
	for (int j = 0; j < num-1; j++)
	{
		 temp += rt[j + 1];
		 cout << temp << endl;
	}
	for (int k = 0; k < num; k++)
	{
		cout << "v" << k+1 << "= " << result_i * rt[k] << endl;
		box_1 = result_i * rt[k];
		cout << "p" << k+1 <<"= " << box_1 * result_i << endl;
		box_2 += box_1 * result_i;
	}
	cout << "pT = " << box_2 << endl;
}

void i_sum_and_result() {
	
	for (int h = 0; h < num; h++)
	{
		cout << "I"<< h+1 << "= " << v / rt[h] << endl;
		box_3 += v / rt[h];
	}
	cout << "IT = " << box_3 << endl;
}

void division_ele() {

	//int a =0;
	temp2 = temp;
	for (int i = 0; i < num; i++)
	{
		temp2 -= rt[i];
		cout << rt[i] << "+" << temp2 << "/" << temp << "*" << v << endl;
		cout << (rt[i] + temp2) / temp * v << endl;
	}
	
}

void two_over_division() {

	for (int i = num; i >= 0; i--)
	{
		cout << rt[i] << "/" << temp << "*" << lt << endl;
		cout << rt[i] / temp * lt << endl;
	}
}

void main() {
	

	r_sum();

	cout << endl;
	i_sum_and_result();
	
	cout << endl;
	division_ele();
	
	cout << endl;
	two_over_division();
}
