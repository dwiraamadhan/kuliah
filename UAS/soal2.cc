#include<iostream>
using namespace std;

void kode_matkul(){
	string kd_matkul[100];

    for(int i = 1; i<=3; i++){
        cout << "Masukkan kode matkul ke-" << i << ": ";
        cin >> kd_matkul[i];
    }

    cout << endl << endl << "Berikut daftar kode mata kuliah di universitas XYZ" << endl;
    for(int i=1; i<=3; i++){
        cout << "Kode Mata Kuliah ke-" << i <<  " adalah " << kd_matkul[i] << endl;
    }
    cout << endl << endl;
}

void nama_matkul(){
		string nama_matkul[100];

    for(int i = 1; i<=3; i++){
        cout << "Masukkan nama matkul ke-" << i << ": ";
        cin >> nama_matkul[i];
    }

    cout << endl << endl << "Berikut daftar nama mata kuliah di universitas XYZ" << endl;
    for(int i=1; i<=3; i++){
        cout << "Nama Mata Kuliah ke-" << i <<  " adalah " << nama_matkul[i] << endl;
    }
}

int main(){
	kode_matkul();
	nama_matkul();
    return 0;
}