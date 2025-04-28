#include <iostream>
using namespace std;

class lingkaran 
{
public: 
    double jarijari;
    double luaslingkaran;

    void inputData() {
        cout << "Masukan Jari jari = ";
        cin >> jarijari;
    }

    double hitungluas() {
        return 3.14 * jarijari * jarijari;
    }
};

int main() {
    lingkaran bulat;
    bulat.inputData();
    cout << endl;
    cout << "Luasnya adalah = " << bulat.hitungluas();
}