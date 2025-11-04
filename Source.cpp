#include <iostream>

using namespace std;
int tong(int a, int b){
	return a + b;
}
int hieu(int a, int b){
	return a-b;
}
int tich(int a, int b){
	return a*b;
}

bool nguyento(int n){
	if(n<2) return false;
	for(int i=2; i*i<=n;i++)
		if(n%i==0)
			return false;
		return true;
}
float thuong(int a, int b);
int main()
{
	int a,b;
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	cout << "Nhap a: ";
	cin >>a;
	cout << "Nhap b: ";
	cin>> b;
	cout<<"Tong = " << tong(a,b) << endl;
	cout<<"Hieu = " << hieu(a,b) << endl;
	cout<<"Tich = "<<tich(a,b)<<endl;
	
	int n;
	cout << "Nhap n de kt nguyen to: ";
	cin >> n;
	if(nguyento(n))
		cout << n << " la so nguyen to";
	else
		cout << n << " khong phai so nguyen to";
	system("pause");
	return 0;
}