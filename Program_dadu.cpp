#include <iostream>
#include <cstdlib> /*standaed library yang mempunyai fungsi random()*/

int main() {
  char Keputusan_Lanjut;
  
  while (true) {
    std::cout << "Mulai dadu? (y/n) \n" << std::endl;
    std::cin >> Keputusan_Lanjut;
    
    if (Keputusan_Lanjut == 'y' /*ketika user memasukan y maka akan dieksekusi */) {
      std::cout << 1 + (rand() % 6 /*modulus 6. sebagai pembatas*/ ) << "\n" << std::endl;
    } else if (Keputusan_Lanjut == 'n') {
      break; /*ketika user memasukan n, maka aksi break atau berhenti akan dieksekusi */
    } else {
      std::cout << "Masukan pilihan antata (y/n) " << std::endl;
    }
  }
  
  std::cin.get();
  return 0;
}