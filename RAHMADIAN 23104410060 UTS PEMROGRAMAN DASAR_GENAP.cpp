#include <iostream>
using namespace std;

int main() {
    
    int n_motor, n_mobil, jam_masuk, jam_keluar, durasi, biaya_motor, biaya_mobil, total;
    
    cout << "Masukkan jumlah motor: ";
    cin >> n_motor;
    
    cout << "Masukkan jumlah mobil: ";
    cin >> n_mobil;
    
    cout << "Input jam masuk (format 24 jam): ";
    cin >> jam_masuk;
   
    cout << "Input jam keluar (format 24 jam): ";
    cin >> jam_keluar;
    
    if (jam_keluar >= jam_masuk) {
        durasi = jam_keluar - jam_masuk;
    }
    else {
        durasi = 24 - jam_masuk + jam_keluar;
    }
   
    biaya_motor = 2000;
    biaya_mobil = 5000;
    
    total = (n_motor * biaya_motor + n_mobil * biaya_mobil) * durasi;
    
    cout << "Total biaya parkir: Rp " << total << " (" << durasi << " jam)" << endl;
    return 0;

}