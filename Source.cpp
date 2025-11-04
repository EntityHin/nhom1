#include <iostream>

using namespace std;
int tong(int a, int b);
int hieu(int a, int b);
int tich(int a, int b){
	return a*b;
};
float thuong(int a, int b);
int main()
{
	int a,b;
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
    cout << "Nhap a: ";
	cin >>a;
	cout << "Nhap b: ";
	cin>> b;
	cout<<"Tong = " << tich(a,b) << endl;
	system("pause");
	return 0;
}