#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
int main(){
	float a,b;
	char c;
	ofstream fout("��ʷ��¼.txt");
	while(true){
		cout << "��������ʽ(�޵Ⱥ�,���ż��пո�.�ܱ�Ǹ��֧������)��" ;
		cin >> a >> c >> b;
		if(c == '+'){
		cout << a << c << b << '=' << a + b << endl;
		fout << a << c << b << '=' << a + b << endl;
	}else if(c == '-'){
		cout << a << c << b << '=' << a - b << endl;
		fout << a << c << b << '=' << a - b << endl;
	}else if(c == '*' || c == '��'){
		cout << a << " ��" << b << " = " << a * b << endl;
		fout << a << " ��" << b << " = " << a * b << endl;
	}else if(c == '^'){
		cout << a << "��" << b << "�η�=" << pow(a,b) << endl;
		fout << a << "^" << b << "=" << pow(a,b) << endl;
	} 
	else{
		cout << a << " ��"<< b << " = " << a / b << endl;
		fout << a << " ��"<< b << " = " << a / b << endl;
	}
	}
	fout.close();
	return 0;
} 
