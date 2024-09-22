#include <iostream>
int main(){

    //SALDO USER 👇
    int saldo = 100000 ; //Isi terserah aja [Experimen Value]
    int sisaSaldo ;

    //Balance UI
    std::cout << "----------------------------------" << std::endl ;
    std::cout << "|Saldo : " << saldo << " |" << std::endl ;

    //Stylish cash withdrawal UI 😎👇
    std::cout << "----------------------------------" << std::endl ;
    std::cout << "|      MENU PENARIKAN CEPAT      |" << std::endl ;
    std::cout << "| SILAKAN PILIH JUMLAH PENARIKAN |" << std::endl ;
    std::cout << "----------------------------------" << std::endl ;
    std::cout << "|                                |" << std::endl ;
    std::cout << "|1. 100.000        2. 200.000    |" << std::endl ;
    std::cout << "|3. 300.000        4. 1.000.000  |" << std::endl ;
    std::cout << "|5. 1.500.000      6. JUMLAH LAIN|" << std::endl ;
    std::cout << "|7. SETOR TUNAI    8. EXIT       |" << std::endl ;
    std::cout << "|                                |" << std::endl ;
    std::cout << "----------------------------------" << std::endl ;

    //Menu choice 🤔
    int satu  = 1 ; int dua      = 2 ;
    int tiga  = 3 ; int empat    = 4 ;
    int lima  = 5 ; int enam     = 6 ;
    int tujuh = 7 ; int delapan  = 8 ;

    //Input menu 👇
    int inputMenu ;
    int exit      ;
    std::cout << "> Masukkan pilihan : " ;
    std::cin  >> inputMenu ;

    //if milih pre-determine menu  💵
    if ( inputMenu == 1 )    //Pilihan 1
    {
        int pilihanSatu = 100000 ;
        
        if ( pilihanSatu <= saldo)
        {
            sisaSaldo = saldo - pilihanSatu ;
        std::cout << "Sisa saldo : " << sisaSaldo ;
        std::cin >> exit ;
        return 0 ;
        }
        
        else
        {
            std::cout << "Saldo tidak mencukupi" ;
            std::cin >> exit ;
            return 0;
        }
        
    }
    
    if ( inputMenu == 2 )    //Pilihan 2
    {
        int pilihanDua = 200000 ;

        if ( pilihanDua <= saldo)
        {
            sisaSaldo = saldo - pilihanDua ;
        std::cout << "Sisa saldo : " << sisaSaldo ;
        std::cin >> exit ;
        return 0 ;
        }
        
        else
        {
            std::cout << "Saldo tidak mencukupi" ;
            std::cin >> exit ;
            return 0;
        }
    }
    
    if ( inputMenu == 3 )    //Pilihan 3
    {
        int pilihanTiga = 300000 ;

        if ( pilihanTiga <= saldo)
        {
            sisaSaldo = saldo - pilihanTiga ;
        std::cout << "Sisa saldo : " << sisaSaldo ;
        std::cin >> exit ;
        return 0 ;
        }
        
        else
        {
            std::cout << "Saldo tidak mencukupi" ;
            std::cin >> exit ;
            return 0;
        }
    }

    if ( inputMenu == 4 )    //Pilihan 4
    {
        int pilihanEmpat = 1000000 ;

        if ( pilihanEmpat <= saldo)
        {
            sisaSaldo = saldo - pilihanEmpat ;
        std::cout << "Sisa saldo : " << sisaSaldo ;
        std::cin >> exit ;
        return 0 ;
        }
        
        else
        {
            std::cout << "Saldo tidak mencukupi" ;
            std::cin >> exit ;
            return 0;
        }
    }
    
    if ( inputMenu == 5 )    //Pilihan 5
    {
        int pilihanLima = 1500000 ;
        if ( pilihanLima <= saldo)
        {
            sisaSaldo = saldo - pilihanLima ;
        std::cout << "Sisa saldo : " << sisaSaldo ;
        std::cin >> exit ;
        return 0 ;
        }
        
        else
        {
            std::cout << "Saldo tidak mencukupi" ;
            std::cin >> exit ;
            return 0;
        }
    }
        
    //menu JUMLAH LAIN 💵
    if ( inputMenu == 6 )    //Pilihan 6
    {
        int jumlahLain ;
        std::cout << "Ketik jumlah yang di-inginkan: " << std::endl ;
        std::cin  >> jumlahLain ;

        if ( jumlahLain <= saldo )
        {
            sisaSaldo = saldo - jumlahLain ;
        std::cout << "Sisa saldo : " << sisaSaldo ;
        std::cin >> exit ;
        return 0 ;
        }
        
        else
        {
            std::cout << "Saldo tidak mencukupi" ;
            std::cin >> exit ;
            return 0;
        }
        
        
    }
    
    //Menu SETOR TUNAI 💵
    if ( inputMenu == 7 )    //Pilihan 7
    {
        int jumlahSetor ;
        std::cout << ">Masukkan jumlah setor tunai" << std::endl ;
        std::cin  >> jumlahSetor ;

        saldo = saldo + jumlahSetor;
        std::cout << "Jumlah saldo: " << saldo ;
        std::cin >> exit ;
        return 0 ;

    }
    
    //Menu EXIT ❎
    if ( inputMenu == 8 )    //Pilihan 8
    {
       std::cout << "Terima kasih telah menggunakan program ini 🙏" ;
       std::cin >> exit ;
       return 0 ;
    }
    
    //Menu null 🤔
    if (inputMenu > 8 )
    {
        std::cout << "Invalid 🤯" << std::endl ;
        std::cin >> exit ;
        return 0 ;
    }
    


    //END HERE

 }