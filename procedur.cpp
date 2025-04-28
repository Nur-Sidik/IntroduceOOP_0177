#include <iostream>
using namespace std;

class hewan
{
private:
    string jenisKelamin;

public:
    string tipe;
    string umur;

    void inputData()
    {
        cout << "Masukan Jenis Kelamin = ";
        cin >> jenisKelamin;

        cout << "Masukan Tipe = ";
        cin >> tipe;

        cout << "Masukan Umur = ";
        cin >> umur;
    }

    void tampilhewan()
    {
        cout << "Jenis kelaminnya adalah " << jenisKelamin << endl;
    }
};

int main()
{
    hewan KORUPTOR;
    KORUPTOR.inputData();
    cout << "umurnya adalah = " << KORUPTOR.umur << endl;
    cout << "Tipenya adalah = " << KORUPTOR.tipe << endl;
    KORUPTOR.tampilhewan();
}