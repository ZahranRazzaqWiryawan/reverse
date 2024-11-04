#include <iostream>
#include <string>

const int MAX_KARYAWAN = 50;

int main() {
    std::string karyawan[MAX_KARYAWAN];
    int Nef; // Jumlah karyawan yang hadir

    std::cout << "Masukkan jumlah karyawan yang hadir (maksimal " << MAX_KARYAWAN << "): ";
    std::cin >> Nef;

    // Validasi jumlah karyawan yang hadir
    if (Nef < 1 || Nef > MAX_KARYAWAN) {
        std::cout << "Jumlah karyawan yang hadir tidak valid!" << std::endl;
        return 1;
    }

    // Menginput nama-nama karyawan yang hadir
    std::cout << "Daftar hadir karyawan hari ini (" << Nef << " karyawan):" << std::endl;
    for (int i = 0; i < Nef; ++i) {
        std::cout << i + 1 << ". ";
        std::cin >> karyawan[i];
    }

    // Menampilkan daftar karyawan yang hadir
    std::cout << "\nDaftar karyawan yang hadir:" << std::endl;
    for (int i = 0; i < Nef; ++i) {
        std::cout << i + 1 << ". " << karyawan[i] << std::endl;
    }

    return 0;
}
