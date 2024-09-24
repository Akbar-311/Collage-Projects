#include <iostream>
int main(){
    using std::cout, std::cin, std::endl ;
    
    float alas, tinggi, luas ;

    cout << "Masukkan panjang alas segitiga: " ;
    cin  >> alas   ;

    cout << "Masukkan tinggi segitiga: " ;
    cin  >> tinggi ;
    cout << endl   ;

    //Rumus menghitung luas segitiga
    luas = 1.5 * alas * tinggi ;
    cout << "Luas segitiga : " << luas << endl ;

    std::string  exit ;
    cin  >> exit ;
    return 0 ;
}