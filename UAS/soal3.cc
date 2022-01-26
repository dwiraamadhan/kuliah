#include<iostream>
#include<fstream>
using namespace std;

void insert()
{
    string nama_matkul;
    ofstream txt;
    txt.open("soalganjil.txt", ios::app);
    cout << "\nMasukkan Nama : ";
    cin >> nama_matkul;
    txt << nama_matkul;
    txt << "\n";
    txt.close();
}
void view(){
    string nama_matkul;
    ifstream txt ("soalganjil.txt");
    if(txt.is_open())
    {
        while(! txt.eof())
        {
            getline(txt, nama_matkul);
            cout<<endl<<nama_matkul<<endl;
        }
    }
}

int main(){
    int pilih;
    char kembali;
    do{
        cout<<"MENU";
        cout<<"\n 0. Exit";
        cout<<"\n 1. Create ";
        cout<<"\n 2. Read ";
        cout<<"\nPilih : "; cin>>pilih;
        switch(pilih){
            case 0:
                cout<<"\nThanks"<<endl;
                return 0;
            case 1:
				insert();
                break;
            case 2:
                cout << "LIST DATA\n";
				view();
                break;
            default:
                cout<<"Pilihan Salah"<<endl;
                break;
            }
            cout<<"Ingin memilih menu lain (y/t)? ";
            cin>>kembali;
            cout<<endl;
        }
while (kembali!= 't');
        cout<<"Thanks"<<endl;
    return 0;
}