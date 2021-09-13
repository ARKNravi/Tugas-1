#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
	string Nama, NIM, Plug;
	int totalKar;
	
	cout<<" Masukkan :"<<"\n";
	cout<<" Nama "<< setw(6)<< " : ";
	getline(cin, Nama);
	cout<<" NIM "<< setw(7)<< " : ";
	getline(cin, NIM);
	cout<<" Plug "<< setw(6)<< " : ";
	getline(cin, Plug);
	
	cout<<"\n"<<" Inilah Data Anda : " << "\n";
	cout<<" Nama "<< setw(6)<< " : "<< Nama << "\n";
	cout<<" NIM "<< setw(7)<< " : "<< NIM << "\n";
	cout<<" Plug "<< setw(6)<< " : "<< Plug << "\n";
	
	totalKar = Nama.length()+NIM.length()+Plug.length()+6+11;
	
	cout<<" \nDalan Bentuk Tabel : "<< endl;
	cout<<setfill('=')<< setw(totalKar-2)<<"="<<"\n";
	cout<<setfill(' ')
		<<" NIM " << setw(NIM.length())
		<<" | "<<setw(6)<<" Nama "<< setw(Nama.length())<<" | "
		<<setw(6)<<" Plug "<< setw(Plug.length())<<"\n";
		
	cout<<setfill('=')<<setw(totalKar-2)<<"="<<"\n";
	
	cout<<setfill(' ')
		<< NIM <<setw(5)
		<<" | "<<setw(Nama.length()+2)<<Nama<<setw(4)<<" | "
		<<setw(Plug.length()+2)<<Plug<<setw(4)<<"\n";
		
	cout<<setfill('-')<<setw(totalKar-2)<<"\n";
	return 0;
}

