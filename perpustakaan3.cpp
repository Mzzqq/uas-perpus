#include <iostream> // Untuk menampilan perintah cin, cout, endl

#include <conio.h> // Untuk menampilkan perintah getch, clrscr,

#include <stdio.h> // Untuk menampilkan perintah printf, scanf, gets

#include <stdlib.h> // Untuk menampilkan perintah atof, atoi, pow

#include <string.h> // Untuk menampilkan perintah strcmp

using namespace std;

void garis() {
    cout << " \t====================================================== \n";
}

int main() {
    string user, pass, username = "admin", password = "1234";
    char status; //Tipe data char user 20 karakter, password 4 karakter, status tidak dibatasi
    int balik; //Tipe data integer
    int a, b, c, d, e, f, j, k, i; //Tipe data integer
    int pil; //Tipe data integer

    //struct untuk menggabungkan beberapa data dengan tipe data yang berbeda
    struct buku {
        int kodeB;
        char judul[30];
        int sewa;
        int stock;
    }
    z[100];

    struct daftar {
        int kodeP;
        char nama[50];
        char tlp[20];
    }
    y[100];

    struct pinjam {
        int kp;
        int kb;
        int noPinjam;
        char tglP[20];
        char tglU[20];
    }
    x[100];

    c = 0;
    e = 0;

    garis(); //Memanggil fungsi garis()
    cout << " \tSelamatDatang Di Aplikasi Peminjaman Buku Perpustakaan \n";
    garis(); //Memanggil fungsi garis()
    cout << endl;

    atas:
        cout << " Silakan Login terlebih dahulu \n";

    cout << " Username : ";
    cin >> user;
    cout << " Password : ";
    cin >> pass;

    if (user == username && pass == password) { //Fungsi percabangan default pass 1234
        cout << " User Berhasil Login\n";
        garis(); //Memanggil fungsi garis()
        cout << endl;
        system("cls"); //clearscreen
    } else {
        cout << "Password Salah\n";
        cout << endl;
        goto atas;
    }

    //Menampilkan Menu pilihan
    menu:
        garis(); //Memanggil fungsi garis()

    cout << " \t\tPilihan Menu Peminjaman\n";
    cout << " 1. Input Data Buku\n";
    cout << " 2. Daftar Buku \n";
    cout << " 3. Pendaftaran Anggota\n";
    cout << " 4. Data Anggota\n";
    cout << " 5. Peminjaman Buku\n";
    cout << " 6. Pengembalian Buku\n";
    cout << " 7. Rekap Buku\n";
    cout << " 8. Keluar\n";

    cout << " Masukan Pilihan Anda : ";
    cin >> pil; //Memasukkan pilihan

    system("cls"); //clears creen
    switch (pil) { //Fungsi switch untuk memilih
    case 1:
        goto input; //Menuju ke Input Data Buku
        break;
    case 2:
        goto book; //Menuju ke Daftar Buku
        break;
    case 3:
        goto daf; //Menuju ke Pendaftaran Anggota
        break;
    case 4:
        goto data; //Menuju ke Data Anggota
        break;
    case 5:
        goto pjm; //Menuju ke Peminjaman Buku
        break;
    case 6:
        goto bali; //Menuju ke Pengembalian Buku
        break;
    case 7:
        goto rekap; //Menuju ke Rekap Buku
        break;
    case 8:
        cout << " Terimakasih Telah menggunakan aplikasi ini\n";
        cout << endl;
        goto end; //Keluar Dari Program
        break;
    default:
        cout << " Pilihan tidak tersedia\n";
        cout << endl;
        goto menu; //Menuju ke Menu Awal
        break;
    }
    //input data buku
    input:
        cout << " Masukan Banyaknya buku yang akan diinputkan : ";

    cin >> a;
    for (b = 0; b < a; b++) { //nilai awal 0, kurang dari nilai input a, bertambah sampai max nilai a
        cout << " Masukan data buku ke- " << b + 1 << endl; //Bertambah 1 jika menambah inputan
        cout << " Kode buku\t ";
        cin >> z[b].kodeB; //Input Kode Buku
        cout << " Judul buku\t ";
        cin >> z[b].judul; //Input Judul Buku
        cout << " Jumlah buku\t ";
        cin >> z[b].stock; //Input Jumlah Buku
        cout << endl;
    }

    system("cls"); //clear screen
    goto menu; //Menuju ke Menu Awal

    //Menampilkan daftar Buku
    book:
        garis(); //Memanggil Fungsi garis ()

    cout << " ======================Daftar Buku=====================\n";
    garis(); //Memanggil Fungsi garis ()
    cout << " | Kode Buku\t| Judul Buku | Jumlah | \n";
    garis(); //Memanggil Fungsi garis ()

    for (b = 0; b < a; b++) { //nilai awal 0, kurang dari nilai input a, bertambah sampai max nilai a
        cout << " |\t" << z[b].kodeB << "\t| " << z[b].judul << "\t\t|\t" << z[b].stock << endl;
    }

    garis(); //Memanggil Fungsi garis ()
    cout << endl;
    goto menu; //Menuju ke Menu Awal

    //pendaftaran anggota
    daf:
        for (d = c; d < c + 1; d++) { //d=c, kurang dari c+1, bertambah terus tidak ada batas
            cout << " Kode Peminjaman (angka): ";
            cin >> y[d].kodeP; //Memasukkan Kode Peminjaman
            cout << " Nama : ";
            cin >> y[d].nama; //Memasukkan Nama
            cout << " Nomor Telepon : ";
            cin >> y[d].tlp; //Memasukkan nomor telepon
            cout << endl;
        }

    c = c + 1;
    k = c;
    cout << " Ingin menginputkan data lagi? (y/n) : ";
    cin >> status;

    if (status == 'Y' || status == 'y') { //Jika diketik Y maka
        goto daf; //Menuju ke daftar
    } else { //Jika tidak maka
        system("cls"); //Clear screen
        goto menu; //Menuju ke Menu
    }
    //data anggota
    data:
        garis(); //Memanggil Fungsi garis ()

    cout << " ==================Data Nama Anggota===================\n";
    garis(); //Memanggil Fungsi garis ()
    cout << " | Kode Peminjaman\t| Nama | No. Telepon | \n";
    garis(); //Memanggil Fungsi garis ()

    for (d = 0; d < c; d++) { //nilai d awal adalah 0, d kurang dari c, d terus bertambah kurang dari c
        cout << " |\t" << y[d].kodeP << "\t| " << y[d].nama << "\t\t|\t" << y[d].tlp << endl;
    }

    goto menu; //Menuju ke Menu Awal

    //peminjaman
    pjm:
        for (f = e; f < e + 1; f++) { //f sama dg e, terus bertambah sampai max sama dengan e
            cout << " Nomor Peminjaman : ";
            cin >> x[f].noPinjam; //Masukkan nomor peminjam
            cout << " Kode Peminjam : ";
            cin >> x[f].kp; //Masukkan kode peminjam

            for (d = 0; d < c - 1; d++) { //nilai d awal 0, terus bertambah hingga kurang dari c-1
                if (y[d].kodeP == x[f].kp) { //Jika kode peminjam ada pada memori maka
                    cout << " Nama peminjam : " << y[d].nama << endl; //Memanggil nama
                    break;
                } else { //jika tidak ada maka
                    cout << " Data tidak ditemukan " << endl; //Data tidak ditemukan
                    cout << " Ingin menginputkan data lagi? (y/n) : ";
                    cin >> status;
                    if (status == 'Y' || status == 'y') { //Jika diketik Y maka
                        goto pjm; //Menuju ke daftar
                    } else { //Jika tidak maka
                        system("cls"); //Clear screen
                        goto menu; //Menuju ke Menu
                    }
                }
            }
            cout << " Kode buku : ";
            cin >> x[f].kb; //Masukkan kode buku
            for (b = 0; b < a; b++) { //nilai awal b=0, b terus bertambah, hingga kurang dari a
                if (z[b].kodeB == x[f].kb) { //Jika kode buku ada pada memori maka
                    cout << " Judul buku : " << z[b].judul << endl; //Output judul buku
                    break;
                } else { //jika tidak ada maka
                    cout << " Data tidak ditemukan " << endl; //Data tidak ditemukan
                    goto pjm; //Menuju ke peminjaman

                }
            }
            cout << " Tanggal Pinjam (DD/MM/YYYY): ";
            cin >> x[f].tglP; //Input tanggal peminjaman
            cout << " Tanggal Kembali (DD/MM/YYYY): ";
            cin >> x[f].tglU; //Input tanggal pengembalian
            cout << endl;
        }
    cout << " Ingin menginputkan data lagi? (y/n) : ";
    cin >> status;
    if (status == 'Y' || status == 'y') { //Jika diinputkan Y, maka
        goto pjm; //Menuju ke peminjaman`
    } else { //Jika tidak maka
        e = e + 1;
        system("cls"); //Clear screen
        goto menu; //Menuju ke Menu
    }
    //pengembalian
    bali:
        cout << " Masukan kode peminjaman : ";
    cin >> balik; //Memasukkan kode peminjaman
    for (f = 0; f < e; f++) //nilai f awal 0, f terus bertambah hinga max kurang dari e
        if (x[f].kp == balik) {
            cout << " Kode buku : " << x[f].kb << endl; //Menampilkan Kode buku
            cout << " Tanggal Pinjam : " << x[f].tglP << endl; //Menampilkan Tanggal Pinjam
            cout << " Tanggal Kembali : " << x[f].tglU << endl; //Menampilkan Tanggal Kembali
        } else { //jika tidak maka
            cout << " Kode yang anda masukan salah " << endl;
            goto bali; //Menuju ke menu pengembalian`
        }
    cout << endl;
    goto menu; //Menuju ke menu awal

    //rekap data
    rekap:
        cout << endl;
    for (j = 0; j < e; j++) { //nilai awal j adalah 0, terus bertambah hingga max kurang dari e
        cout << " Nomor Peminjaman : " << x[j].noPinjam << endl; //Menampilkan Kode Peminjaman
        cout << " Kode Peminjam : " << x[j].kp << endl; //Menampilkan Kode Peminjam
        for (i = 0; i < k; i++) { //nilai i awal 0, terus bertambah sampai max kurang dari k
            if (y[i].kodeP == x[j].kp) { //Jika kode peminjam tersimpan dalam memori maka
                cout << " Nama Peminjam : " << y[i].nama << endl; //Menampilkan Nama Peminjam sesuai kode peminjam
            }
        }
        cout << " Kode Buku : " << x[j].kb << endl; //Menampilkan Kode Buku
        for (b = 0; b < a; b++) { //nilai awal b adalah 0, terus bertambah hingga kurang dari a
            if (z[b].kodeB == x[j].kb) { //Jika Kode Buku ada dalam memori maka
                cout << " Judul Buku : " << z[b].judul << endl; //Menampilkan Judul Buku Sesuai dengan Kode Buku
            }
        }
        cout << " Tanggal Pinjam : " << x[j].tglP << endl; //Menampilkan Tanggal Peminjaman
        cout << " Tanggal Kembali : " << x[j].tglU << endl; //Menampilkan Tanggal Pengembalian
        cout << endl;

    }
    cout << "Ingin Kembali Ke Menu Utama? <Y/n>";
    cin >> status;
    if (status == 'Y' || status == 'y') {
        system("cls"); //clear screen
        goto menu;
    } //Menuju ke Menu Awalr
    else {
        goto rekap;
    }

    end:
        system("pause"); //system program pause
    return 0; //mengembalikan nilai 0 ke sistem menandakan program berjalan dengan baik
}
