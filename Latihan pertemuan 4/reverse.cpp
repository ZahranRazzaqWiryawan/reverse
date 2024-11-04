#include <iostream>

int main() {
    int N;

    std::cout << "Masukkan N: ";
    std::cin >> N;

    // Membuat array untuk menyimpan N bilangan
    int bilangan[N];

    // Menerima N buah bilangan
    std::cout << "Masukkan " << N << " bilangan:\n";
    for (int i = 0; i < N; ++i) {
        std::cin >> bilangan[i];
    }

    // Menampilkan hasil bilangan dalam urutan terbalik
    std::cout << "Hasil dibalik:\n";
    for (int i = N - 1; i >= 0; --i) {
        std::cout << bilangan[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
