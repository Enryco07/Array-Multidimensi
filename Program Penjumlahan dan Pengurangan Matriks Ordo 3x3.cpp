#include <iostream>
using namespace std;

int main(){
    int pilih, A[3][3],B[3][3],hasil[3][3];
    cout << "Program Penjumlahan dan PEngurangan Matriks Ordo 3x3" << endl;

    do{
        cout << "==================================================" << endl;
        cout << "Pilih Penjumlahan atau Pengurangan: " << endl;
        cout << "1. Penjumlahan" << endl;
        cout << "2. Pengurangan" << endl;
        cout << "3. Selesai" << endl;
        cout << "==================================================" << endl;
        cout << "Pilih : ";
        cin >> pilih;

        switch (pilih)
        {
        case 1:
            cout << "==================================================" << endl;
            cout << "Penjumlahan Matriks" << endl;
            cout << "Masukkan Elemen Matriks A : \n\n";
            for(int m = 0; m < 3; m++){
                for(int n = 0; n < 3; n++){
                    cin >> A[m][n];
                }
            }
            cout << endl;

            cout << "Masukkan Elemen Matriks B : \n\n";
            for(int m = 0; m < 3; m++){
                for(int n = 0; n < 3; n++){
                    cin >> B[m][n];
                }
            }
            cout << endl;

            cout << "Hasil Penjumlahan Elemen Matriks A dan B : \n\n";
            for (int m = 0; m < 3; m++){
                for (int n = 0; n < 3; n++){
                    hasil[m][n] = A[m][n] + B[m][n];
                }
            }
            cout << endl;

            for (int m = 0; m < 3; m++){
                for (int n = 0; n < 3; n++){
                    cout << " " << A[m][n];
                }
                if (m == 1){
                    cout << " +";
                } else {
                    cout << "\t";
                }
                for (int n = 0; n < 3; n++){
                    cout << " " << B[m][n];
                } if (m == 1){
                    cout << " =";
                } else {
                    cout << "\t";
                }
                for (int n = 0; n < 3; n++){
                    cout << " " << hasil[m][n];
                }
                cout << endl;
            }
            break;
        case 2:
            cout << "==================================================" << endl;
            cout << "Pengurangan Matriks" << endl;
            cout << "Masukkan Elemen Matriks A : \n\n";
            for(int m = 0; m < 3; m++){
                for(int n = 0; n < 3; n++){
                    cin >> A[m][n];
                }
            }
            cout << endl;

            cout << "Masukkan Elemen Matriks B : \n\n";
            for(int m = 0; m < 3; m++){
                for(int n = 0; n < 3; n++){
                    cin >> B[m][n];
                }
            }
            cout << endl;

            cout << "Hasil Pengurangan Elemen Matriks A dan B : \n\n";
            for (int m = 0; m < 3; m++){
                for (int n = 0; n < 3; n++){
                    hasil[m][n] = A[m][n] - B[m][n];
                }
            }
            cout << endl;

            for (int m = 0; m < 3; m++){
                for (int n = 0; n < 3; n++){
                    cout << " " << A[m][n];
                }
                if (m == 1){
                    cout << " -";
                } else {
                    cout << "\t";
                }
                for (int n = 0; n < 3; n++){
                    cout << " " << B[m][n];
                } if (m == 1){
                    cout << " =";
                } else {
                    cout << "\t";
                }
                for (int n = 0; n < 3; n++){
                    cout << " " << hasil[m][n];
                }
                cout << endl;
            }
            break;
        case 3:
            cout << "Selesai" << endl;
            pilih = 3;
            break;
        
        default:
            cout << "Pilihan angka salah, silahkan pilih lagi" << endl;
            break;
        }

    } while (pilih != 3);
}