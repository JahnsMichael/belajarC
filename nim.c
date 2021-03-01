#include <stdio.h>

struct Mahasiswa {
    char nama[50];
    int nim;
};

struct Mahasiswa dataMahasiswa[3] = {
    {"Jahns Michael", 10},
    {"Indra Nathanael", 11},
    {"Golongan Kami", 12}
};

int main() {
    int SIZE = sizeof(dataMahasiswa)/sizeof(dataMahasiswa[0]);

    int inputNim, found = 0;
    printf("Masukan NIM mahasiswa yang ingin dicari namanya: ");
    scanf("%d", &inputNim);

    for (int i = 0; i < SIZE; i++) {
        if (dataMahasiswa[i].nim == inputNim) {
            printf("Nama mahasiswa dengan NIM %d adalah %s. \n", inputNim, dataMahasiswa[i].nama);
            found = 1;
            break;
        }
    }

    if (found == 0) {
        printf("Pencarian gagal, tidak ada mahasiswa dengan NIM %d atau data tidak lengkap.\n", inputNim);
    }

    return found;
}