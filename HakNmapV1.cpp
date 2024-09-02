/* ~ # Owned By Haket
   ~ # Coded By Haket
   ~ # ©Haket - 2024
   ~ # This Tools Open Source
<------------------------------------------------------>
~ $ Description:
this tools for using Nmap simple
this tools inbuild from nmap
~ $ License:
Proyek ini dilisensikan di bawah GNU General
Public License versi 2. Lihat file `LICENSE`
untuk detail lebih lanjut.
<---------------------------------------------------->*/
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <csignal>
#include <string>
#include <vector>
//<==================================================>\\

// Eksekusi Otomatis std;
using namespace std;
/*note: bisa juga dengan > std::cout << "Hello\n";
        jika tanpa using namespace std;*/

//<==================================================>\\
// Warna
#define Merah "\033[1;31m"
#define Kuning "\033[1;33m"
#define Hijau "\033[1;32m"
#define Biru "\033[1;34m"
#define Putih "\033[1;37m"
#define Cyan "\033[1;36m"
#define bgbiru "\033[1;34;47m"
#define Reset "\033[0m"

// Sinyal
#define sinyalC SIGINT
#define sinyalZ SIGTSTP

// Deteksi Kode
void tampilan();
void tampilanV1();
void cekIP();
void fitur1();
void fitur2();
void fitur3();
void fitur4();
void fitur5();
void fitur6();
void fitur7();
void fitur8();
void fitur9();
void fitur10();
void TeachNmap();
void kembali();
void kembaliV1();
void text_tengah(const string& text, int width);

// Panggil Sinyal
void panggil_sinyal(int signum) {
     if (signum == sinyalC || signum == sinyalZ) {
        fitur5();
     }
}

//<==================================================>\\

// Tampilan();
void tampilan() {
     // Membersihkan Layar Terminal
     system("clear");
     // Tampilan Nmap
     cout << Putih << R"(

                     ___.-------.___
                 _.-' ___.--;--.___ `-._
              .-' _.-'  /  .+.  \  `-._ `-.
            .' .-'      |-|-o-|-|      `-. `.
           (_ <O__      \  `+'  /      __O> _)
             `--._``-..__`._|_.'__..-''_.--'
                   ``--._________.--''
    ____  _____  ____    ____       _       _______
   |_   \|_   _||_   \  /   _|     / \     |_   __ \
     |   \ | |    |   \/   |      / _ \      | |__) |
     | |\ \| |    | |\  /| |     / ___ \     |  ___/
    _| |_\   |_  _| |_\/_| |_  _/ /   \ \_  _| |_
   |_____|\____||_____||_____||____| |____||_____|)" << endl;
     // Figket HakNMP
     cout << Hijau << R"(
  ██╗  ██╗ █████╗ ██╗  ██╗███╗   ██╗███╗   ███╗██████╗
  ██║  ██║██╔══██╗██║ ██╔╝████╗  ██║████╗ ████║██╔══██╗
  ███████║███████║█████╔╝ ██╔██╗ ██║██╔████╔██║██████╔╝
  ██╔══██║██╔══██║██╔═██╗ ██║╚██╗██║██║╚██╔╝██║██╔═══╝
  ██║  ██║██║  ██║██║  ██╗██║ ╚████║██║ ╚═╝ ██║██║
  ╚═╝  ╚═╝╚═╝  ╚═╝╚═╝  ╚═╝╚═╝  ╚═══╝╚═╝     ╚═╝╚═╝)" << endl;
     // Menentukan Lebar Layar Terminal
     int width = 74;
     string text = "[Coded By Haket]"; // Setel Text
     text_tengah(text, width); // Panggil Text
     // Note/Deskripsi
     cout << Putih << R"(
                         Note:
  alat ini untuk mempermudah dalam pemakaian Nmap dan
       mempelajari command dari Nmap, serta cara
             pemakaian Nmap secara manual.
)" << endl << endl;
     // Menu Tampilan
     cout << Cyan << "[0] Fitur Lainnya" << endl;
     cout << Kuning;
     cout << "[i] Cek IP Web" << endl;
     cout << "[1] Pindai Ping" <<  endl;
     cout << "[2] Pindai Port Umum" << endl;
     cout << "[3] Pindai Port Pilihan" << endl;
     cout << "[4] Pindai Kerentanan SQLI" << endl;
     cout << Hijau << "[5] Keluar/Exit" << endl << endl;
     // Tambah Input Bernama select
     string select;
     // Mengulang Input
     while (true) {
           // Tampilan Input
           cout << Biru << "[?] Pilih Fitur: " << Putih;
           // Setel Input
           getline(cin, select);
           // Menyetel Pemasukan Input
           if (select == "1") {
              fitur1();
           } else if (select == "2") {
              fitur2();
           } else if (select == "3") {
              fitur3();
           } else if (select == "4") {
              fitur4();
           } else if (select == "5") {
              fitur5();
           } else if (select == "0") {
              tampilanV1();
           } else if (select == "i") {
              cekIP();
           } else {
              tampilan();
           }
     }
}

//<==================================================>\\

// Fitur 0 --Lainnya
void tampilanV1() {
     system("clear");
     cout << Hijau << R"(
                     ___.-------.___
                 _.-' ___.--;--.___ `-._
              .-' _.-'  /  .+.  \  `-._ `-.
            .' .-'      |-|-o-|-|      `-. `.
           (_ <O__      \  `+'  /      __O> _)
             `--._``-..__`._|_.'__..-''_.--'
                   ``--._________.--''
    ____  _____  ____    ____       _       _______
   |_   \|_   _||_   \  /   _|     / \     |_   __ \
     |   \ | |    |   \/   |      / _ \      | |__) |
     | |\ \| |    | |\  /| |     / ___ \     |  ___/
    _| |_\   |_  _| |_\/_| |_  _/ /   \ \_  _| |_
   |_____|\____||_____||_____||____| |____||_____|)" << endl;
     cout << Biru << R"(
  ██╗  ██╗ █████╗ ██╗  ██╗███╗   ██╗███╗   ███╗██████╗
  ██║  ██║██╔══██╗██║ ██╔╝████╗  ██║████╗ ████║██╔══██╗
  ███████║███████║█████╔╝ ██╔██╗ ██║██╔████╔██║██████╔╝
  ██╔══██║██╔══██║██╔═██╗ ██║╚██╗██║██║╚██╔╝██║██╔═══╝
  ██║  ██║██║  ██║██║  ██╗██║ ╚████║██║ ╚═╝ ██║██║
  ╚═╝  ╚═╝╚═╝  ╚═╝╚═╝  ╚═╝╚═╝  ╚═══╝╚═╝     ╚═╝╚═╝)" << endl;
     int width = 74;
     string text = "[HakNmap inbuild form Nmap]";
     text_tengah(text, width);
     cout << Putih << R"(
                         Note:
  alat ini untuk mempermudah dalam pemakaian Nmap dan
       mempelajari command dari Nmap, serta cara
             pemakaian Nmap secara manual.)" << endl << endl;
     cout << Kuning;
     cout << "[6] Pemindaian IPv6" << endl;
     cout << "[7] Pemindaian Koneksi TCP" << endl;
     cout << "[8] Menemukan Versi Layanan Berjalan" << endl;
     cout << "[9] Pindai Port Yang Sering Dipakai (Cepat)" << endl;
     cout << "[0] Pemindaian Biasa" << endl;
     cout << Hijau << "[T] Pembelajaran Fungsi Dan Command Nmap (manual)" << endl;
     cout << "[K] Keluar/Exit" << endl;
     cout << Cyan << "[B] Kembali Ke Menu Awal" << endl << endl;
     string selectV1;
     while (true) {
           cout << Biru << "[?] Pilih Fitur: " << Putih;
           getline(cin, selectV1);
           if (selectV1 == "6") {
              fitur6();
           } else if (selectV1 == "7") {
              fitur7();
           } else if (selectV1 == "8") {
              fitur8();
           } else if (selectV1 == "9") {
              fitur9();
           } else if (selectV1 == "0") {
              fitur10();
           } else if (selectV1 == "T") {
              TeachNmap();
           } else if (selectV1 == "K" || selectV1 == "k") {
              fitur5();
           } else if (selectV1 == "B" || selectV1 == "b") {
              tampilan();
           } else {
              tampilanV1();
           }
     }

}

//<==================================================>\\

// Check IP Website
void cekIP() {
     system("clear");
     cout << Hijau << "[B] Ketik 99 Untuk Kembali" << endl;
     string ckIP;
     cout << Kuning << "[+] Ketik Domain Website: " << Putih;
     getline(cin, ckIP);
     if (ckIP == "99" || ckIP == "b" || ckIP == "B") {
        tampilan();
     }
     string cmd0 = "echo '" + string(Hijau) + "'; ping -c 1 " + ckIP + "; echo '" + "'";
     string cmd1 = "echo '" + string(Kuning) + "'; dig " + ckIP + "; echo '" + "'";
     string cmd2 = "echo '" + string(Biru) + "'; nslookup " + ckIP + "; echo '" + "'";
     string cmd3 = "echo '" + string(Putih) + "'; host " + ckIP + "; echo '" + "'";
     system(cmd0.c_str());
     system(cmd1.c_str());
     system(cmd2.c_str());
     system(cmd3.c_str());
     kembali();
}

//<==================================================>\\

// Fitur 1
void fitur1() {
     system("clear"); // Untuk Memanggil OS clear
     cout << Hijau << R"(
            ___  _             ____
           / _ \(_)__  ___ _  / __/______ ____
          / ___/ / _ \/ _ `/ _\ \/ __/ _ `/ _ \
         /_/  /_/_//_/\_, / /___/\__/\_,_/_//_/
                     /___/)" << endl;
     cout << Biru << R"(
		        ⣴⡿⠶⠀⠀⠀⣦⣀⣴⠀⠀⠀⠀
		        ⣿⡄⠀⠀⣠⣾⠛⣿⠛⣷⠀⠿⣦
		        ⠙⣷⣦⣾⣿⣿⣿⣿⣿⠟⠀⣴⣿
		⠀        ⣸⣿⣿⣿⣿⣿⣿⣿⣾⠿⠋⠁
		⠀        ⣿⣿⣿⠿⡿⣿⣿⡿⠀⠀⠀⠀
		        ⢸⣿⡋⠀⠀⠀⢹⣿⡇⠀⠀⠀⠀
		        ⣿⡟⠀⠀⠀⠀⠀⢿⡇⠀⠀⠀⠀
		        ⠉⠁⠀⠀⠀⠀⠀⠸⠇)" << endl; // Print Panjang
     cout << "      [========================================]" << endl;
     cout << "      |" << Kuning << "Cara Pemakaian: contoh:                 " << Putih << "|" << endl;
     cout << "      |" << Biru << "[W] Ketik Domain/IP Website: " << Putih << "lghk.com   " << Putih << "|" << endl;
     cout << "      |" << Biru << "[W] Ketik Domain/IP Website: " << Putih << "123.456.789|" << endl;
     cout << "      |" << Kuning << "Cara Liat IP Website: " << Putih << "ping <website>    |" << endl;
     cout << "      |" << Biru << "Contoh: " << Putih << "ping lghk.com		       |" << endl;
     cout << "      [________________________________________]" << endl;
     cout << "                  [Generated By Haket]" << endl << endl;
     cout << Kuning << "[B] Ketik 99, Untuk Kembali" << endl;
     string website;
     cout << Biru << "[W] Ketik Domain/IP Website: ";
     cout << Putih;
     getline(cin, website);
     cout << Hijau;
     if (website == "99" || website == "b" || website == "B") {
        tampilan();
     }
     string cmd = "echo '" + string(Hijau) + "'; nmap -sn " + website + "; echo '" + "'";
     system(cmd.c_str());
     kembali();
}

//<==================================================>\\

// Fitur 2
void fitur2() {
     system("clear");
     cout << Kuning << R"(
       ⡴⠒⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⠉⠳⡆⠀
       ⣇⠰⠉⢙⡄⠀⠀⣴⠖⢦⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⣆⠁⠙⡆
       ⠘⡇⢠⠞⠉⠙⣾⠃⢀⡼⠀⠀⠀⠀⠀⠀⠀⢀⣼⡀⠄⢷⣄⣀⠀⠀⠀⠀⠀⠀⠀⠰⠒⠲⡄⠀⣏⣆⣀⡍
       ⠀⢠⡏⠀⡤⠒⠃⠀⡜⠀⠀⠀⠀⠀⢀⣴⠾⠛⡁⠀⠀⢀⣈⡉⠙⠳⣤⡀⠀⠀⠀⠘⣆⠀⣇⡼⢋⠀⠀⢱
       ⠀⠘⣇⠀⠀⠀⠀⠀⡇⠀⠀⠀⠀⡴⢋⡣⠊⡩⠋⠀⠀⠀⠣⡉⠲⣄⠀⠙⢆⠀⠂⠀⣸⠀⢉⠀⢀⠿⠀⢸
       ⠀⠀⠸⡄⠀⠈⢳⣄⡇⠀⠀⢀⡞⠀⠈⠀⢀⣴⣾⣿⣿⣿⣿⣦⡀⠀⠀⠀⠈⢧⠀⠀⢳⣰⠁⠀⠀⠀⣠⠃
       ⠀⠀⠀⠘⢄⣀⣸⠃⠀⠀⠀⡸⠀⠀⠀⢠⣿⣿⣿⣿⣿⣿⣿⣿⣿⣆⠀⠀⠀⠈⣇⠀⠀⠙⢄⣀⠤⠚⠁⠀
          ⠀⠀⠀ ⠀⠀⠀⠀⡇⠀⠀⢠⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡄⠀⠀⠀⢹⠀⠀⠀⠀⠀⠀⠀⠀⠀
          ⠀⠀⠀  ⠀⠀⠀⡀⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡀⠀⠀⢘⠀⠀⠀⠀⠀⠀⠀⠀⠀
          ⠀⠀⠀⠀⠀⠀⠀⠀⡇⠀⢰⣿⣿⣿⡿⠛⠁⠀⠉⠛⢿⣿⣿⣿⣧⠀⠀⣼⠀⠀⠀⠀⠀⠀⠀⠀⠀
          ⠀⠀⠀⠀⠀⠀⠀⠀⢠⡀⣸⣿⣿⠟⠀⠀⠀⠀⠀⠀⠀⢻⣿⣿⣿⡀⢀⠇⠀⠀⠀⠀⠀⠀⠀⠀⠀
          ⠀⠀⠀⠀⠀⠀⠀⠀⠘⡇⠹⠿⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⢿⡿⠁⡏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
          ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠻⣤⣞⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢢⣀⣠⠇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
        ⠀⠀⠀ ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⠲⢤⣀⣀⠀⢀⣀⣀⠤⠒⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀)" << endl;
     cout << Putih << "      [=========================================]" << endl;
     cout << Putih << "      |" << Kuning << "Cara Pemakaian: Contoh:                  " << Putih << "|" << endl;
     cout << Putih << "      |" << Biru << "[W] Ketik Domain/IP Website:" << Putih << " lghk.com    |" << endl;
     cout << Putih << "      |" << Biru << "[W] Ketik Domain/IP Website: " << Putih << "123.456.789 |" << endl;
     cout << Putih << "      [=========================================]" << endl;
     cout << Hijau << "                   [Scan Public Port]" << endl << endl;
     cout << Kuning << "[B] Ketik 99, Untuk Kembali" << endl;
     // Input Domain Website
     string websitep;
     cout << Biru << "[W] Ketik Domain/IP Website: " << Putih;
     getline(cin, websitep);
     // Pemasukkan 99 Dari User
     if (websitep == "99" || websitep == "b" || websitep == "B") { // Jika User Input 99
        tampilan(); // Memunculkan tampilan();
     }
     // Menjalankan Nmap, Serta Kombinasi Dari Input
     string cmd = "echo '" + string(Hijau) + "'; nmap " + websitep + "; echo '" + "'";
     system(cmd.c_str());
     kembali();
}

//<==================================================>\\

// Fitur 3
void fitur3() {
     system("clear");
     cout << Biru << R"(
               ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
              ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣰⡿⣇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
              ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⣿⣿⣿⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
              ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣰⣿⣿⣿⣷⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
              ⠀⠀⠀⣀⣀⣠⡤⡤⣤⣤⣿⣷⡿⣯⣿⣿⣧⣤⣤⣤⣤⣤⡄⠀⠀⠀⠀⠀⠀⠀
              ⠀⠀⠀⠈⠙⣿⣿⣿⣿⣿⣿⣿⡿⣿⣟⣿⣟⡿⣟⣿⣿⠟⠁⠀⠀⠀⠀⠀⠀⠀
              ⠀⠀⠀⠀⠀⠀⠙⢿⣿⣿⣿⣿⣿⣿⣿⣿⢿⣷⣿⠟⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀
              ⠀⠀⠀⠀⠀⠀⠀⢀⣟⣿⣿⣿⣿⣿⣿⣟⣿⣭⣅⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
              ⠀⠀⠀⠀⠀⠀⠀⣾⣿⣿⣿⣿⣿⠿⣯⡿⣿⣼⣿⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
              ⠀⠀⠀⠀⠀⠀⣾⣿⣿⣿⠏⠉⠀⠀⠉⠛⠿⣽⡿⣮⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
              ⠀⠀⠀⠀⠀⢸⣿⡿⠟⠁⠀⠀⠀⠀⠀⠀⠀⠉⠛⢿⣷⠀⠀⠀⠀⠀⠀⠀⠀⠀
              ⠀⠀⠀⠀⠀⠚⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠁⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀)" << endl;
     cout << Putih << "     [===========================================]" << endl;
     cout << Putih << "     |" << Kuning << "Cara Pemakaian: Contoh:                    " << Putih << "|" << endl;
     cout << Putih << "     |" << Hijau << "[P] Ketik Port Yang Dipindai: " << Putih << "40,20,80,443 |" << endl;
     cout << Putih << "     |" << Biru << "[W] Ketik Domain/IP Website: " << Putih << "kominfo.go.id |" << endl;
     cout << Putih << "     |" << Biru << "[W] Ketik Domain/IP Website: " << Putih << "123.456.789   |" << endl;
     cout << Putih << "     [===========================================]" << endl;
     cout << Putih << "                  [Scan Port Manual]" << endl << endl;
     cout << Kuning << "[B] Ketik .. Untuk Kembali" << endl;
     string port;
     cout << Hijau << "[P] Ketik Port Yang Dipindai: " << Putih;
     getline(cin, port);
     if (port == ".." || port == "." || port == "b" || port == "B") {
        tampilan();
     }
     string websiteport;
     cout << Biru << "[W] Ketik Domain Website: " << Putih;
     getline(cin, websiteport);
     if (websiteport == ".." || websiteport == "." || websiteport == "b" || websiteport == "B") {
        tampilan();
     }
     string cmd = "echo '" + string(Hijau) + "'; nmap -p " + port + " " + websiteport + "; echo '" + "'";
     system(cmd.c_str());
     kembali();
}

//<==================================================>\\

// Fitur 4
void fitur4() {
     system("clear");
     cout << Kuning << R"(
           ⠀⠀⠀⠀⣀⣤⣤⣶⣾⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣶⣶⣦⣤⣀⠀⠀⠀⠀⠀
           ⣀⣴⣶⣿⣿⣿⣿⣿⣿⣷⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣴⣿⣿⣿⣿⣿⣿⣷⣦⣄⡀
           ⠁⠀⠀⠈⠉⠛⣿⣿⣿⣿⣿⣷⣦⣀⢠⣆⣸⡆⢀⣤⣾⣿⣿⣿⣿⣿⠟⠋⠉⠀⠀⠀⠀
           ⠀⠀⠀⠀⠀⠀⠸⠿⠿⠿⠿⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠿⠿⠿⠿⠏⠀⠀⠀⠀⠀⠀⠀
           ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠻⣿⣿⣿⣿⠿⠋⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
           ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠉⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀)" << endl;
     cout << Putih << "         [==================================]" << endl;
     cout << Putih << "         |" << Kuning << "Cara Pemakaian: Contoh:           " << Putih << "|" << endl;
     cout << Putih << "         |" << Hijau << "[T] Ketik Domain Target: " << Putih << "Ighk.com |" << endl;
     cout << Putih << "         [==================================]" << endl;
     cout << Biru << "                   [Scan Vuln SQLI]" << endl << endl;
     cout << Kuning << "[B] Ketik 99, Untuk Kembali" << endl;
     string target;
     cout << Hijau << "[T] Ketik Domain Target: " << Kuning;
     getline(cin, target);
     if (target == "99" || target == "b" || target == "B") {
        tampilan();
     }
     string cmd = "echo '" + string(Putih) + "'; nmap --script=http-sql-injection " + target + "; echo '" + "'";
     system(cmd.c_str());
     kembali();
}

//<==================================================>\\

// Fitur 5
void fitur5() {
     system("clear");
     cout << Hijau << "im here and im lammer" << endl;
     exit(0);
}

//<==================================================>\\

// Fitur 6
void fitur6() {
     system("clear");
     cout << Kuning << R"(
⠀⠀⠀⠀⠀⠀⠀⠀	⠀⠀⠀⠀⠀⠀⠀⠀⣤⣶⣶⣶⣶⣶⣶⣶⣴⣴⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
	⠀⠀⠀⠀⠀⠀⠠⠀⠀⠀⠀⢀⣠⣴⣿⣟⢿⠛⠟⡛⡛⠻⢛⠻⠿⣿⣿⣷⣶⣄⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀
	⠀⠀⠀⠀⠀⠀⠀⠀⢀⣤⣾⣟⡿⠍⢍⠁⠊⠁⡐⠠⠁⠂⠀⠄⠁⠌⠡⠛⡛⠿⣿⣷⣦⡂⠀⠀⠀⠀⠀⠀
	⠀⠀⠀⠀⠀⠀⠀⣴⣿⡿⠍⠁⠁⠂⠁⠁⠄⣀⡀⠀⠀⠀⠀⠀⠀⠀⠐⢁⠠⠁⡍⢻⢿⣿⣶⣤⠀⠀⠀⠀
	⠀⠀⠀⠀⠀⣄⣿⣿⠳⠂⠀⠀⠀⠀⠀⠀⠀⠀⠈⠀⠀⠀⠀⠈⠀⠀⠀⠀⠀⠡⠘⠄⢎⠿⢿⣿⣄⠀⠀⠀
	⠀⠀⠀⠈⣼⣿⡿⠏⠄⠀⠈⠀⠠⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠌⠂⡍⢻⢻⣿⣦⠀⠀
	⠀⠀⠀⢨⣿⢹⠅⡁⠁⠀⠀⠀⠀⠀⠄⠀⠀⡀⠀⠀⠂⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠐⠈⠅⣎⣿⣿⣧⡄
	⠠⠀⢰⣿⡿⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⢔⠹⣸⢿⣿⣁
	⠀⠀⢰⣿⢿⠀⡐⣤⣿⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣤⣴⣶⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⢈⠳⣹⣻⣿⡧
	⠀⠀⢀⣿⠉⣥⣸⣿⣿⣿⡇⠌⠀⠀⠀⠀⠡⠀⢀⢸⣿⣿⣿⣿⣗⠀⠀⠀⠀⠀⠀⠀⠀⠀⠢⡑⢪⣽⣿⣟
	⠀⠀⢘⣿⡒⡉⢽⣿⣿⣿⠇⠀⠀⠀⠀⠀⠀⢀⠈⢼⣿⣿⣿⣿⡏⠀⠀⠀⠀⠀⠀⠀⠀⠀⢂⡕⢪⡽⣿⡯
	⠀⠀⠉⣿⣜⠄⡈⠙⠛⠁⠀⠀⠀⠀⠀⠀⠀⠀⠐⠈⠙⠿⠟⠋⠁⠀⠈⠀⠀⠀⠀⠀⠀⠐⢠⠘⡭⣿⣿⡇
	⠀⠀⠈⢹⣷⠈⠁⠀⠀⠀⠂⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⣄⠳⣸⣷⣿⠏
	⠀⠀⠀⠀⣿⣿⡆⠀⠀⠀⠀⣀⣬⣔⣢⣆⣤⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡀⢡⠢⣝⣾⣿⠏⠀
	⠀⠀⠐⠀⠀⣿⣶⡔⠀⠖⣸⣿⣿⣿⣿⣿⢿⣿⣿⣶⣄⠀⠀⠀⠀⠀⠀⠀⠠⠀⢀⠐⢠⠣⣽⣿⣿⠟⠀⠀
	⠀⠀⠀⠈⠀⠀⠻⣛⣄⠰⢿⣿⣿⣿⣿⣽⣟⣾⣽⣿⣿⣷⠀⠀⠀⠀⢀⠀⡀⢐⠠⡘⣤⣿⣿⣿⠋⠀⠀⠀
	⠀⠀⠀⠀⠀⠀⠀⠁⠿⣖⣍⠻⠿⢟⠛⠏⠿⠿⢻⢿⣿⠟⠀⠀⡀⠂⢄⠐⡈⢆⣳⣚⣿⣿⠛⠁⠀⠀⠀⠀
	⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠿⣷⢤⣂⣠⢀⢠⡄⡀⣀⠂⡀⠄⡀⠄⡉⢦⣘⣶⣿⣿⠿⠛⠀⠀⠀⠀⠀⠀⠀
	⠀⠀⠀⠀⠀⠀⠀⠀⠐⠀⠀⠈⠉⠉⠹⣮⣽⣴⣳⣵⣭⣽⣽⣬⣽⣿⡿⠿⠛⠛⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀
	⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⠸⠻⠿⠿⠿⠻⠿⡼⠿⠿⠿⠛⠀⠀⠀⠀⠀⠘⠃⠀⠀⠀⠀⠀⠀)" << endl;
     cout << Putih << "     |------------+" << Biru << "[Pemindaian IPv6]" << Putih << "+------------|" << endl;
     cout << Putih << "     [===========================================]" << endl;
     cout << Putih << "     |" << Kuning << "Cara Pemakaian: Contoh                     " << Putih << "|" << endl;
     cout << Putih << "     |" << Hijau << "[+] Ketik Domain/IP Website: " << Putih << "kominfo.go.id |" << endl;
     cout << Putih << "     |" << Hijau << "[+] Ketik Domain/IP Website: " << Putih << "123.456.789   |" << endl;
     cout << Putih << "     |" << Kuning << "Cara Melihat IP Website: " << Putih "ping <website>    |" << endl;
     cout << Putih << "     |" << Kuning << "Contoh: " << Putih << "ping kominfo.go.id                 |" << endl;
     cout << Putih << "     [===========================================]" << endl;
     cout << Putih << "                 [Generated By Haket]" << endl << endl;
     cout << Kuning << "[B] Ketik 99 Untuk Kembali" << endl;
     string website6;
     cout << Hijau << "[+] Ketik Domain/IP Website: " << Putih;
     getline(cin, website6);
     if (website6 == "99" || website6 == "b" || website6 == "B") {
        tampilanV1();
     }
     string cmd = "echo '" + string(Kuning) + "'; nmap -6 " + website6 + "; echo '" + "'";
     system(cmd.c_str());
     kembaliV1();
}

//<==================================================>\\

// Fitur 7
void fitur7() {
     system("clear");
     cout << Putih << R"(
             ⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
             ⠟⢦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
             ⢷⡄⠈⡓⠢⢄⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣠⠤⠂⢹
             ⠈⡷⡄⠈⠲⢤⣈⠻⠉⠛⠉⠉⠁⠒⠖⠉⠉⠉⠒⠶⢦⣤⠴⠒⢉⣡⢴⠀⠀⠀
             ⠀⢸⡿⡂⠀⠀⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣠⣴⡞⠉⠀⢀⣠⡞⠀
         ⠀    ⠀⢙⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠀⠀⢠⡼⡟⠀⠀
             ⠀⠀⡼⠋⠀⣤⣀⠀⠀⠀⠀⠀⠈⠐⣂⣄⠀⠀⠀⠀⠀⠀⠀⢀⠀⣰⡟⠁⠀⠀
             ⠀⢠⡇⠀⠀⠘⠛⠃⠀⠀⠀⠀⠾⣿⠿⠟⠉⠀⠀⠀⠀⠀⠀⠀⠀⢻⠀⠀⠀⠀
             ⠀⢸⡇⢺⡀⠀⢠⡒⠠⣄⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠠⡀⠀⠀⠸⡇⠀⠀⠀
             ⠀⢸⡇⣘⠑⡀⠀⠙⢏⣁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠂⠀⣔⣇⠀⠀⠀
             ⠀⢸⡇⡁⠀⢳⣶⣾⣷⣦⣄⣀⡀⣀⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⠀⠀⠀
             ⠀⠸⡇⠁⠀⠀⢏⠉⠀⠀⠙⠛⠛⠛⠉⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⢈⡏⠀⠀⠀
            ⠀⠀⠯⣀⣈⣀⣈⣐⣲⣄⣄⣤⣴⣆⣀⣀⣀⣀⣀⣀⣀⣀⣀⣀⣈⣛⡧⠀⠀)" << endl;
     cout << Putih << "      [=========================================]" << endl;
     cout << Putih << "      |" << Kuning << "Cara Pemakaian: Contoh:                  " << Putih << "|" << endl;
     cout << Putih << "      |" << Hijau << "[W] Ketik Domain/IP Website: " << Putih << "Ighk.com    |" << endl;
     cout << Putih << "      |" << Hijau << "[W] Ketik Domain/IP Website: " << Putih << "123.456.789 |" << endl;
     cout << Putih << "      [=========================================]" << endl << endl;
     cout << Kuning << "[B] Ketik 99 Untuk Kembali" << endl;
     string website7;
     cout << Hijau << "[W] Ketik Domain/IP Website: " << Putih;
     getline(cin, website7);
     if (website7 == "99" || website7 == "b" || website7 == "B") {
        tampilanV1();
     }
     string cmd = "echo '" + string(Kuning) + "'; nmap -sT " + website7 + "; echo '" + "'";
     system(cmd.c_str());
     kembaliV1();
}

//<==================================================>\\

// Fitur 8
void fitur8() {
     system("clear");
     cout << Biru << R"(
                 ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
                 ▒▒▄▄▄▒▒▒█▒▒▒▒▄▒▒▒▒▒▒▒▒
                 ▒█▀█▀█▒█▀█▒▒█▀█▒▄███▄▒
                 ░█▀█▀█░█▀██░█▀█░█▄█▄█░
                 ░█▀█▀█░█▀████▀█░█▄█▄█░
                 ████████▀████████████░)" << endl;
     cout << Putih << "     [===========================================]" << endl;
     cout << Putih << "     |" << Kuning << "Cara Pemakaian: Contoh:                    " << Putih << "|" << endl;
     cout << Putih << "     |" << Hijau << "[W] Ketik Domain/IP Website: " << Putih << "kominfo.go.id |" << endl;
     cout << Putih << "     |" << Hijau << "[W] Ketik Domain/IP Website: " << Putih << "123.456.789   |" << endl;
     cout << Putih << "     |" << Kuning << "[!] " << Putih << "Proses Mungkin Akan Lama               |" << endl;
     cout << Putih << "     [===========================================]" << endl << endl;
     cout << Kuning << "[B] Ketik 99 Untuk Kembali" << endl;
     string website8;
     cout << Hijau << "[W] Ketik Domain/IP Website: ";
     getline(cin, website8);
     if (website8 == "99" || website8 == "b" || website8 == "B") {
        tampilanV1();
     }
     string cmd = "echo '" + string(Kuning) + "'; nmap -sV " + website8 + "; echo '" + "'";
     system(cmd.c_str());
     kembaliV1();
}

//<==================================================>\\

// Fitur 9
void fitur9() {
     system("clear");
     cout << Putih << "      [==========================================]" << endl;
     cout << Putih << "      |" << Kuning << "Cara Pemakaian: Contoh                    " << Putih << "|" << endl;
     cout << Putih << "      |" << Hijau << "[W] Ketik Domain/IP Target: " << Putih << "kominfo.go.id |" << endl;
     cout << Putih << "      |" << Hijau << "[W] Ketik Domain/IP Target: " << Putih << "123.456.789   |" << endl;
     cout << Putih << "      [==========================================]" << endl << endl;
     cout << Kuning << "[B] Ketik 99 Untuk Kembali" << endl;
     string website9;
     cout << Hijau << "[W] Ketik Domain/IP Target: " << Putih;
     getline(cin, website9);
     if (website9 == "99" || website9 == "b" || website9 == "B") {
        tampilanV1();
     }
     string cmd = "echo '" + string(Kuning) + "'; nmap -F " + website9 + "; echo '" + "'";
     system(cmd.c_str());
     kembaliV1();
}

//<==================================================>\\

// Fitur 10
void fitur10() {
     system("clear");
     cout << Hijau << R"(
                :================:
               /||# nmap -A _   ||
              / ||              ||
             |  ||              ||
              \ ||              ||
                ==================
         ........... /      \.............
        :\        ############            \
        : ---------------------------------
        : |  *   |__________|| ::::::::::  |
        \ |      |          ||   .......   |
         --------------------------------- 8)" << endl;
     cout << Putih << "     [===========================================]" << endl;
     cout << Putih << "     |" << Kuning << "Cara Pemakaian: Contoh:                    " << Putih << "|" << endl;
     cout << Putih << "     |" << Hijau << "[W] Ketik Domain/IP Website: " << Putih << "kominfo.go.id |" << endl;
     cout << Putih << "     |" << Hijau << "[W] Ketik Domain/IP Website: " << Putih << "123.456.789   |" << endl;
     cout << Putih << "     [===========================================]" << endl << endl;

     cout << Putih << "[K] Ketik Cb Untuk Kembali" << endl;
     string fitsNmap;
     cout << Hijau << "[W] Ketik Domain/IP Website: " << Biru;
     getline(cin, fitsNmap);
     if (fitsNmap == "99" || fitsNmap == "Cb" || fitsNmap == "kembali" || fitsNmap == "Kembali" || fitsNmap == "KEMBALI" || fitsNmap == "cb" || fitsNmap == "CB" || fitsNmap == "Comeback" || fitsNmap == "comeback" || fitsNmap == "COMEBACK") {
        tampilanV1();
     }

     string cmd = "echo '" + string(Kuning) + "'; nmap " + fitsNmap + "; echo '" + "'";
     system(cmd.c_str());
     kembaliV1();

}

//<==================================================>\\

void TeachNmap() {
     system("clear");
     cout << Hijau << R"(
       ████████╗███████╗ █████╗  ██████╗██╗  ██╗
       ╚══██╔══╝██╔════╝██╔══██╗██╔════╝██║  ██║
          ██║   █████╗  ███████║██║     ███████║
          ██║   ██╔══╝  ██╔══██║██║     ██╔══██║
          ██║   ███████╗██║  ██║╚██████╗██║  ██║
          ╚═╝   ╚══════╝╚═╝  ╚═╝ ╚═════╝╚═╝  ╚═╝)" << endl;
     cout << R"(
            🟧🟧🟧🟧🟧🟧🟧🟧🟧🟧🟧🟧🟧🟧🟧🟧
            🟧🟧🟨🟧🟧🟨🟨🟧🟧🟨🟨🟧🟧🟨🟨🟧
            🟧🟧🟨🟧⬛⬛🟨🟨🟧🟧⬛🟧🟨🟨🟨🟧
            🟧🟧🟨🟧⬛🏿⬛🟧🟧⬛⬛⬛🟧🟨🟧🟧
            🟧🟧🟧⬛🏿🏿🏿🟧🟧⬛🏿🏿⬛🟧🟧🟧
            🟧🟧🟧⬛🏿🏿🏿🟧🟧⬛🏿🏿🏿🟧🟧🟧
            🟧🟧🟧⬛🏿🏿🏿🟧🟧⬛🏿🏿🏿🏿🟧🟧
            🟧🟨🟨🟧🏿🏿🟧🟧🟧🟧🏿🏿🏿🏿🟧🟧
            🟧🟨🟨🟨🟧🟧🟧🟧🟧🟧🟧🟧🟧🟧🟧🟧
            🟧🟧🟧⬛🟧⬛🟧🟧⬛🟧🟧⬛🟧⬛🟧🟧
            🟧🟧⬛⬛⬛⬛🏿⬛⬛🏿⬛⬛🏿⬛🟧🟧
            🟧🟧⬛🏿🏿🏿🏿🏿🏿🏿🏿🏿🏿🏿🏿🟧
            🟧🟧🟧⬛🏿🟧🏿🏿🟧🏿🏿🏿🟧🏿🏿🟧
            🟧🟧🟧⬛🟧🟨🏿🟧🟧🟨🟨🏿🟧🟧🟧🟧
            🟧🟧🟨🟧🟧🟨🟨🟧🟧🟧🟨🟧🟧🟨🟨🟧
            🟧🟧🟧🟧🟧🟧🟧🟧🟧🟧🟧🟧🟧🟧🟧🟧)" << endl;

     cout << Kuning << R"(
========================================================
# Old Style Version:

                 [T] Fungsi Fitur [i]:
             untuk melihat ip website serta
               detailnya, cara pemakaian:
         [====================================]
         |install paket dnsutils:             |
         |termux : pkg install dnsutils       |
         |linux  : sudo apt install dnsutils  |
         |====================================|
         |teknik1: ketik: dig <website>       |
         |contoh : dig kominfo.go.id          |
         |====================================|
         |teknik2: ketik: host <website>      |
         |contoh : host kominfo.go.id         |
         |====================================|
         |teknik3: ketik: nslookup <website>  |
         |contoh : nslookup kominfo.go.id     |
         |====================================|
         |teknik4: ketik: ping -c 1 <website> |
         |contoh : ping -c 1 kominfo.go.id    |
         [====================================]

========================================================
# New Style Version:

Fungsi Dan Command/Pemakaian Manual Nmap:

Fitur1: berfungsi untuk memindai ping website:
cara pemakaian:

nmap -sP <website/ip>

contoh:
versi website:
nmap -sP kominfo.go.id

versi ip:
nmap -sP 123.456.789
__________________________________________
[Bisa Dipakai Diakses Root dan Tidak Root]
========================================================
Fitur2: berfungsi untuk memindai port umum:
cara pemakaian:

nmap <website/ip>

contoh:
versi website:
nmap kominfo.go.id

versi ip:
nmap 123.456.789

__________________________________________
[Bisa Dipakai Diakses Root dan Tidak Root]
========================================================
Fitur3: berfungsi untuk memindai port pilihan/manual:
cara pemakaian:

nmap -p <port> <website/ip>

contoh:
versi website:
nmap -p 12,123,80,443 kominfo.go.id

versi ip:
nmap -p 13,18,19,20,443 123.456.789

__________________________________________
[Bisa Dipakai Diakses Root dan Tidak Root]
========================================================
Fitur4: berfungsi untuk memindai kerentanan sql website:
cara pemakaian:

nmap --script=http-sql-injection <domain-website>

contoh:
versi domain:
nmap --script=http-sql-injection Ighk.com

__________________________________________
[Bisa Dipakai Diakses Root dan Tidak Root]
========================================================
Fitur6: berfungsi untuk menindai IPv6:
cara pemakaian:

nmap -6 <IPv6> -Pn

contoh:
versi IPv6:
nmap -6 2001:df2:a600::10 -Pn

versi tutorial cek IPv6:
cara liat IPv6 website:
$ nslookup <website>

contoh:
$ nslookup kominfo.go.id

Hasil:
Server:         8.8.8.8
Address:        8.8.8.8#53

Non-authoritative answer:
Name:   kominfo.go.id
Address: 45.60.34.49
Name:   kominfo.go.id
Address: 45.60.36.49
Name:   kominfo.go.id
Address: 2001:df2:a600::10 <=[IPv6]

__________________________________________
[Bisa Dipakai Diakses Root dan Tidak Root]
========================================================
Fitur7: berfungsi untuk memindai koneksi TCP:
cara pemakaian:

nmap -sT <website/ip>

contoh:
versi website:
nmap -sT kominfo.go.id

versi ip:
nmap -sT 123.456.789

__________________________________________
[Bisa Dipakai Diakses Root dan Tidak Root]
========================================================
Fitur8: berfungsi untuk menemukan versi layanan yang
        berjalan, prosesnya mungkin lama:
cara pemakaian:

nmap -sV <website/ip>

contoh:
versi website:
nmap -sV kominfo.go.id

versi ip:
nmap -sV 123.456.789

__________________________________________
[Bisa Dipakai Diakses Root dan Tidak Root]
========================================================
Fitur9: berfungsi untuk memindai port yang sering
        dipakai sehingga memungkinkan proses pemindaian
        cepat:
cara pemakaian:

nmap -F <website/ip>

contoh:
versi website:
nmap -F kominfo.com

versi ip:
nmap -F 123.456.789

__________________________________________
[Bisa Dipakai Diakses Root dan Tidak Root]
========================================================
Untuk lainnya kebanyakan butuh akses root dan yang
diatas hanya versi yang tidak root, untuk versi
root atau tidak root dan sedikit tips berikut ini:
--------------------------------------------------------

[+] cara pemindaian banyak target:

    nmap <target1> <target2>

    contoh:

    versi website:
    nmap kominfo.go.id Ighk.com

[#] Note: cara ini juga bisa dipakai di software ini.

[!] Bisa Dipakai Diakses Root dan Tidak Root.

--------------------------------------------------------

[+] cara pemindaian rentang port:

    nmap -p <port_awal>-<port_akhir> <website/ip>

    contoh:

    versi website:
    nmap -p 1-443 kominfo.go.id

    versi ip:
    nmap -p 1-443 123.456.789

[#] Note: fungsi memindai rentang port tertentu.

[!] Bisa Dipakai Diakses Root dan Tidak Root.

--------------------------------------------------------

[+] cara pemindaian seluruh port:

    nmap -p- <website/ip>

    contoh:

    versi website:
    nmap -p- kominfo.go.id

    versi ip:
    nmap -p- 123.456.789

[#] Note: pemindaian semua port memungkinkan butuh
          proses yang sangat lama.

[!] Bisa Dipakai Diakses Root dan Tidak Root.

--------------------------------------------------------

[+] cara pemindaian SYN (Half-Open-Scan):

    nmap -sS <website/ip>

    contoh:

    versi website:
    nmap -sS kominfo.go.id

    versi ip:
    nmap -sS 123.456.789

[#] Note: fungsi pemindaian SYN setengah terbuka, yang
          lebih cepat dan lebih tidak terdeteksi.

[!] Hanya Bisa Dipakai Saat Akses Root.

--------------------------------------------------------

[+] cara pemindaian UDP:

    nmap -sU <website/ip>

    contoh:

    versi website:
    nmap -sU kominfo.go.id

    versi ip:
    nmap -sU 123.456.789

[#] Note: fungsi pemindaian port UDP

[!] Hanya Bisa Dipakai Saat Akses Root.

--------------------------------------------------------

[+] cara melacak rute target:

    nmap --traceroute <website/ip>

    contoh:

    versi website:
    nmap --traceroute kominfo.go.id

    versi ip:
    nmap --traceroure 123.456.789

[#] Note: fungsi melacak rute target, butuh akses root
          agar hasil akurat.

[!] Hanya Bisa Dipakai Saat Akses Root.

--------------------------------------------------------

[+] cara pemindaian secara perlahan:

    nmap -T0 <website/ip>

    contoh:

    versi website:
    nmap -T0 kominfo.go.id

    versi ip:
    nmap -T0 123.456.789

[#] Note: fungsi memindai dengan sangat perlahan untuk
          menghindari deteksi oleh IDS/IPS.

[!] Bisa Dipakai Diakses Root dan Tidak Root.

--------------------------------------------------------

[+] cara pemindaian tercepat:

    nmap -T5 <website/ip>

    contoh:

    versi website:
    nmap -T5 kominfo.go.id

    versi ip:
    nmap -T5 123.456.789

[#] Note: fungsi pemindaian cepat, tapi bisa
          meningkatkan peluang untuk terdeteksi.

[!] Bisa Dipakai Diakses Root dan Tidak Root.

--------------------------------------------------------

[+] cara memindai dan menyimpan output ke file.txt:

    nmap -oN <nama_file> <website/ip>

    contoh:

    versi website:
    nmap -oN Rescan.txt kominfo.go.id

    versi ip:
    nmap -oN Rescan.txt 123.456.789

    versi pemindaian lainnya:
    nmap -oN Haket.txt -p 12,80,443 kominfo.go.id

[#] Note: bisa digunakan untuk menyimpan hasil
          pemindaian kedalam file.txt.

[!] Bisa Dipakai Diakses Root dan Tidak Root.

--------------------------------------------------------

[+] cara memindai kerentanan XSS:

    nmap --script http-xxsed -p <port> <target/ip>

    contoh:

    versi target:
    nmap --script http-xxsed -p 80,443 israel.com

    versi ip:
    nmap --script http-xxsed -p 80,443 123.456.789

[#] Note: fungsi untuk memindai halaman target yang
          mungkin berpotensi memiliki kerentanan xss.

[!] Bisa Dipakai Diakses Root dan Tidak Root.

--------------------------------------------------------

[+] cara debugging output:

    nmap -d <target/ip>

    contoh:

    versi website:
    nmap -d kominfo.go.id

    versi ip:
    nmap -d 123.456.789

[#] Note: fungsi menampilkan informasi debug, berguna
          untuk troublehooting.

[!] Bisa Dipakai Diakses Root dan Tidak Root.
========================================================
    ________________________________________________
    [          Terima Kasih Telah Bersabar         ]
    ================================================
    |Masih Banyak Lagi Kode Nmap, Selebihnya Bisa  |
    |Dipelajari Lewat Media/Platform Lain          |
    |Sekian Dari Saya, We Are Anonymous, Expect Us.|
    ================================================
       [!] Direkomendasikan Dibaca Dari Atas [!]
========================================================

     )" << endl;
     string HakNmap;
     cout << Hijau << "[OPTION: 99=BACK]: " << Kuning;
     getline(cin, HakNmap);
     while (true) {
           if (HakNmap == "99") {
               tampilanV1();
           } else {
               TeachNmap();
           }
     }
}

//<==================================================>\\

// Kembali
void kembali() {
     string back;
     cout << Kuning << "[B] Kembali Ke Fitur? [Y/n]: ";
     getline(cin, back);
     if (back == "Y" || back == "y") {
        tampilan();
     } else if (back == "n" || back == "N") {
        fitur5();
     } else {
        fitur5();
     }
}

//<==================================================>\\

// Kembali Tampilan Lainnya
void kembaliV1() {
     string backV1;
     cout << Kuning << "[B] Kembali Ke Tampilan Lainnya? [Y/n]: ";
     getline(cin, backV1);
     if (backV1 == "Y" || backV1 == "y") {
        tampilanV1();
     } else if (backV1 == "n" || backV1 == "N") {
        fitur5();
     } else {
        tampilanV1();
     }
}

//<==================================================>\\

void comTeach() {
     system("clear");
}
//<==================================================>\\
// Text Ketengah
void text_tengah(const string& text, int width) {
     int padding = (width - text.length()) / 2;
     if (padding < 0) padding = 0;
        cout << setw(padding) << bgbiru << "" << bgbiru << text << Reset << endl;
}

//<==================================================>\\

// Eksekusi Fitur
int main() {
    // Deteksi Sinyal
    signal(sinyalC, panggil_sinyal);
    signal(sinyalZ, panggil_sinyal);

    // Fitur Tampilan
    tampilan();
    return 0;
}

//<==================================================>\\
// Coded By Haket
// ©Haket - 2024
// Im Here And Im Lammer,
// We Are Anonymous, Expect Us.

