#include <iostream>
using namespace std;

float temp;
float v = 120; //볼트 입력
float r = 27250; //저항 합 입력
float result_i = v / r;
int num = 4; //몇번할지
//저항 개수
float rt[] = { 750, 15000, 10000, 1500 };

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
		cout << "vt" << k+1 << "= " << result_i * rt[k] << endl;
		box_1 = result_i * rt[k];
		cout << "p" << k+1 <<"= " << box_1 * result_i << endl;
		box_2 += box_1 * result_i;
	}
	cout << "pT = " << box_2 << endl;
}

void i_sum_and_result() {
	
	for (int h = 0; h < num; h++)
	{
		cout << "I"<<h+1 << "= " << v / rt[h] << endl;
		box_3 += v / rt[h];
	}
	cout << "IT = " << box_3 << endl;
}

void main() {
	

	r_sum();
	i_sum_and_result();
	
	
}
