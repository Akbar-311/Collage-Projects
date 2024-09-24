#include <iostream>
using namespace std ;
int main(){

    //Variable 📦
    string nama, alamat ;
    int nim, hp ;

    //Stylish input UI 😎👇
    cout << "-----------------------" << endl ;
    cout << "Masukkan Data Mahasiswa" << endl ;
    cout << "-----------------------" << endl << endl ;

    cout << "Masukkan Nama     :" << endl ;
    cout << " >" ;
    getline(cin, nama) ;

    cout << "Masukkan NIM      :" << endl ;
    cout << " >" ; cin >> nim ;

    cout << "Masukkan nomor HP :" << endl ;
    cout << " >" ; cin >> hp ;

    cin.ignore();

    cout << "Masukkan alamat   :" << endl ;
    cout << " >" ; getline(cin, alamat) ;
    
    //Hasil :
    cout << "------------------------" << endl ;
    cout << "     Data Mahasiswa     " << endl ;
    cout << "------------------------" << endl ;

    cout << "Nama   : " << nama   << endl ;
    cout << "NIM    : " << nim    << endl ;
    cout << "HP     : " << hp     << endl ;
    cout << "ALAMAT : " << alamat << endl ;

    string exit ;
    cin >> exit ;

}