class Mahasiswa:
    def __init__(self, nama, nim):
        self.nama = nama
        self.nim = nim

dataMahasiswa = [
    Mahasiswa("Jahns Michael", 10),
    Mahasiswa("Indra Nathanael", 11),
    Mahasiswa("Golongan Kami", 12),
]

def main():
    found = False
    inputNim = int(input("Masukan NIM mahasiswa yang ingin dicari namanya: "))
    
    for mahasiswa in dataMahasiswa:
        if inputNim == mahasiswa.nim:
            print(f'Nama mahasiswa dengan NIM {mahasiswa.nim} adalah {mahasiswa.nama}.')
            found = True
            break

    if not found:
        print(f'Pencarian gagal, tidak ada mahasiswa dengan NIM {inputNim} atau data tidak lengkap')

if __name__ == "__main__":
    main()
