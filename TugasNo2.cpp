#include <iostream>
using namespace std;
int main()
{

	int C, Fahrenheit, Kelvin, Reamur;
	cout<<" Konversi Suhu : " << "\n";
	cout<<" Masukkan Suhu Celcius : ";
	cin>> C;

	Fahrenheit = 9.0/5.0 * C + 32;
	Kelvin = 273 + C;
	Reamur = 4.0/9.0 * C + 32;
	
	cout<<endl;
	cout<<"Hasil Konversi Suhu dari Celcius : "<<endl;
	cout<<" Celcius	: "<< C << endl;
	cout<<" Fahrenheit	: "<< Fahrenheit<< endl;
	cout<<" Kelvin		: " << Kelvin << endl;
	cout<<" Reamur		: " << Reamur << endl;
}

