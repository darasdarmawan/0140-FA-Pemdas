/** @mainpage sistem penilaian pada matakuliah
 * 
 * @section intro_sec Pendahuluan
 *  Program ini dibuat untuk mengetahui informasi sistem penilaian matakuliah
 * 
 * @section structur_sec Struktur Kode
 * Kode ini terdiri dari tiga kelas yaitu :
 * - @b matakuliah: .
 * - @b pemrograman: 
 * - @b jaringan : 
 * 
 * 
*/
#include <iostream>
using namespace std;

/**
 * @class MataKuliah
 * @brief mengenai poin-poin yang ada pada  class
 */
class MataKuliah
{
private: 
    float presensi;
    float activity;
    float exercise;
    float tugasakhir;
public: 
    MataKuliah()
    {
        presensi = 0.0;
        activity = 0.0;
        exercise = 0.0;
        tugasakhir = 0.0;

    }
    virtual void namaMataKuliah() { return; }
    virtual void inputNilai() { return; }
    virtual void cekKelulusan() { return; }
    virtual float hitungNilaiAkhir() { return; }

    void setPresensi(float nilai)
    {
        this->presensi = nilai;
    }
    float getPresensi()
    {
        return presensi;
    }
    void setActivity(float nilai)
    {
        this->activity = nilai;
    }
    float getActivity()
    {
        return activity;
    }
    void setExercise(float nilai)
    {
        this->exercise = nilai;
    }
    float getExercise()
    {
        return exercise;
    }
    void setTugasAkhir(float nilai)
    {
        this->tugasakhir = nilai;
    }
    float getTugasAkhir()
    {
        return tugasakhir;
    }

};

/**
 * @class pemrograman
 * @brief class pemrograman yang ada pada class matakuliah
 */
class Pemrograman : public MataKuliah
{
public:
    void namaMataKuliah()
    {
        cout << "Pemrograman" << endl;
    }
    void inputNilai()
    {
    float presensi;
    float activity;
    float exercise;
    float tugasakhir;

    cout << "Masukkan nilai presensi: ";
    cin >> presensi;
    setPresensi(presensi);
    cout << "Masukkan nilai activity: ";
    cin >> activity;
    setActivity(activity);
    cout << "Masukkan nilai exercise: ";
    cin >> exercise;
    setExercise(exercise);
    cout << "Masukkan nilai tugas akhir: ";
    cin >> tugasakhir;
    setTugasAkhir(tugasakhir);
    }
};

/**
 * @class jaringan
 *  @brief hasil nilai pada class jaringan yang ada pada matakuliah
 */
class Jaringan : public MataKuliah
{
    public:
    void namaMataKuliah()
    {
        cout << "Jaringan" << endl;
    }
    void inputNilai()
    {
    float activity;
    float exercise;
    cout << "Masukkan nilai activity: ";
    cin >> activity;
    setActivity(activity);
    cout << "Masukkan nilai exercise: ";
    cin >> exercise;
    setExercise(exercise);
    }
};

int main()
{
    char pilih;
    MataKuliah *mataKuliah;
    Pemrograman pemrograman;
    Jaringan jaringan;

  cout << "Pilih Mata Kuliah :" << endl;
  cout << "1. Pemrograman" << endl;
  cout << "2. Jaringan" << endl;
  cout << "3. Keluar" << endl;
  cout << "Pilih: ";
  cin >> pilih;

 mataKuliah->namaMataKuliah();
 mataKuliah->inputNilai();
}
