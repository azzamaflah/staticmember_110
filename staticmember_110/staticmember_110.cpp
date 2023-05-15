#include <iostream>
#include <string>
using namespace std;

class mahasiswa { 
public:
	static int nim; 
	int id;
	string nama;

	void setID(); 
	void printAll();
	mahasiswa(string pnama) :nama(pnama) { setID(); }

};
int mahasiswa::nim = 0;

void mahasiswa::setID() { 
	id = ++nim;
} 

void mahasiswa::printAll() {  
	cout << "ID = " << id << endl;
	cout << "Nama = " << nama << endl;  
	cout << endl; 
}
int main() {
	mahasiswa mhs1("andi irawan");
	mahasiswa mhs2("kendil");
	mahasiswa mhs3("labu");
	mahasiswa mhs4("brojoko");

	mhs1.printAll();
	mhs2.printAll();
	mhs3.printAll();
	mhs4.printAll();
	return 0;
}