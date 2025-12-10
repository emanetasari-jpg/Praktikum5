#include <iostream>
#include <vector> //karena akan mengoperasikan vektor
#include <algorithm> //untuk fungsi sort

using namespace std;

void main()
{
	int data[11] = { 12, 17, 10, 5, 15, 25, 11, 7, 25, 16, 19 };

	vector<int> myVector(data, data + 11); //agar vectornya bisa terbaca

	auto cetakVektor = [](const vector<int> vec, const string& judul) //agar vektor bisa terbaca di atas dan bawah
		{
			cout << judul << endl;
			for (int val : vec)
			{
				cout << val << " | ";
			}
			cout << "\n===================================================\n";
		};
	cetakVektor(myVector, "Isi vector awal : ");

	//ASC untuk mengurutkan angka dari yang terkecil ke terbesar
	sort(myVector.begin(), myVector.end());
	cetakVektor(myVector, "Isi vector setelah sorting ASC :");

	//DESC untuk mengurutkan angka dari yang terbesar ke terkecil
	sort(myVector.rbegin(), myVector.rend());
	cetakVektor(myVector, "Isi vector setelah sorting DESC :");
	}

