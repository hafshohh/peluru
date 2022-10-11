// NAMA		: Hafshoh Atsilah Mulkus
// NRP		: 5022221006
// Jurusan	: Teknik Elektro

#include <iostream>
#include <cmath>
using namespace std;

#define GRAVITASI 10 //10 m/s^2
#define START_PENGUKURAN 1 //pengukuran dimulai dari 1 meter
#define SUDUT 45 //sudut elevasi tembakan

int mencari_V0(int v0, int loss)
{
    
    /* Tulis fungsi mencari v0 kalian disini */
    v0 -= loss;
      return v0;
}

int speed_dgn_loss(int v0)
{
    /* tulis fungsi hitung_loss kalian disini */
    int nilai_loss;
    
    if (v0 >=1 && v0 <= 10) {
        nilai_loss = 1;
    } else if (v0 >=11 && v0<=20) {
        nilai_loss = 3;
    } else if (v0 >= 21 && v0 <= 30) {
    nilai_loss = 5;
    }
    return nilai_loss;
}

int main() {
    /* tulis kode utama kalian disini */
    int v0;
    float jarak, kecepatan_tangensial;
    /* input adalah kecepatan tangensial maksimum roller */
    /* std::cin >> input */
    cin >> v0;
    jarak = (pow(mencari_V0 (v0, speed_dgn_loss(v0)),2)* sin (SUDUT*3.14159*2/180)/GRAVITASI)- START_PENGUKURAN;
    jarak = round (jarak);
    kecepatan_tangensial = sqrt (jarak * GRAVITASI/ sin (SUDUT*3.14159*2/180)) + speed_dgn_loss (v0);
    cout << jarak << " " << kecepatan_tangensial << endl;
    /* std::cout << jarak << " " << kecepatan tangensial << std::endl */
    return 0;
}