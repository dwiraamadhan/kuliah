#include<iostream>
using namespace std;

int main(){
    string kd_matkul[100];
    string nama_matkul[100];

    for(int i = 1; i<=3; i++){
        cout << "Masukkan kode matkul ke-" << i << ": ";
        cin >> kd_matkul[i];
        cout << "Masukkan nama matkul ke-" << i << ": ";
        cin >> nama_matkul[i];
    }

    cout << endl << endl << "Berikut daftar mata kuliah di universitas XYZ" << endl;
    for(int i=1; i<=3; i++){
        cout << "Kode Mata Kuliah: " << kd_matkul[i] << endl;
        cout << "Nama Mata Kuliah: " << nama_matkul[i] << endl << endl;
    }
    
    for(int i=1; i<=3;i++){
    	cout << "Lokasi memory string kode matkul " << "ke-" << i << " adalah " <<&kd_matkul[i] << endl;
    	cout << "Lokasi memory string nama matkul " << "ke-" << i << " adalah " <<&nama_matkul[i] << endl;
	}
    

    return 0;
}