#include "doublyList.h"

int main() {
    List L;
    CreateList(L);

    // Soal 1
    for (int i = 0; i < 4; i++) {
        infotype x;
        cout << "masukkan nomor polisi: ";
        cin >> x.nopol;
        cout << "masukkan warna kendaraan: ";
        cin >> x.warna;
        cout << "masukkan tahun kendaraan: ";
        cin >> x.thnBuat;

        if (findElm(L, x) != NULL) {
            cout << "nomor polisi sudah terdaftar" << endl << endl;
            continue;
        }
        insertLast(L, alokasi(x));
        cout << endl;
    }
    printInfo(L);

    // Soal 2
    infotype cari;
    cout << endl << "Masukkan Nomor Polisi yang dicari : ";
    cin >> cari.nopol;

    address P = findElm(L, cari);
    if (P != NULL) {
        cout << "Nomor Polisi : " << P->info.nopol << endl;
        cout << "Warna        : " << P->info.warna << endl;
        cout << "Tahun        : " << P->info.thnBuat << endl;
    } else {
        cout << "Data tidak ditemukan" << endl;
    }

    // Soal 3
    infotype hapus;
    cout << endl << "Masukkan Nomor Polisi yang akan dihapus : ";
    cin >> hapus.nopol;

    address target = findElm(L, hapus);
    if (target == NULL) {
        cout << "Data tidak ditemukan" << endl;
    } else {
        address Q;
        if (target == L.First) {
            deleteFirst(L, Q);
        } else if (target == L.Last) {
            deleteLast(L, Q);
        } else {
            deleteAfter(target->prev, Q);
        }
        cout << "Data dengan nomor polisi " << Q->info.nopol
             << " berhasil dihapus." << endl;
        dealokasi(Q);
    }
    printInfo(L);

    return 0;
}