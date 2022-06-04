#include <iostream>           

using namespace std;        //tidak perlu menulis std untuk setiap baris


//variabel sementara untuk sort
char ganti,ganti1;      //untuk sort dengan tipe char(kelas dan gender)
string tukar,tukar1;    //untuk sort dengan tipe char(kelas dan gender)
int tmp,tmp1;           //untuk sort dengan tipe char(nilai dan semester)

struct data{            //deklarasi struct (Membuat Tipe Data Baru)
  string nama[20];
  int nilai[10];
  char kelas[10];
  int smt[10];
  char gender[10];
};

void garis(){ //fungsi tanpa pengembalian data
    cout <<"===============================================\n";
}
void menu_pilih(){ //fungsi tanpa pengembalian data
    
    cout << "\t\tMengurutkan DATA MAHASISWA\t\t"<<endl;
    cout << "|| 1. Nilai Mahasiswa"<<endl;
    cout << "|| 2. Nama Mahasiswa"<<endl;
    cout << "|| 3. Kelas Mahasiswa"<<endl;
    cout << "|| 4. Semester Mahasiswa"<<endl;
    cout << "|| 5. Gender Mahasiswa"<<endl;
    cout << "|| 6. Selesai"<<endl;
}

int main()
{
    int n,indeks,pilihan; //deklarasi n = jumlah data, indeks untuk sort, pilihan untuk menu pilihan
    
    cout << "Masukan jumlah data: ";
    cin>>n;
    data mhs; // Variable Mahasiswa dalam Struct 
    
    program:
    //menu untuk menginput nilai ke variabel dalam struct mhs
    
    for(int i = 0; i < n; i++) //Perulangan Untuk Berapa data yang akan di Input
    {
        cout << "Input Data" << endl;
        cout << "Mahasiswa ke-" << (i + 1) << endl;
        cout << "Masukan Nama\t: ";
        cin.ignore();
        getline(cin, mhs.nama[i]); // Berguna untuk Meng Input Space / Jarak pada nama [i]->Looping Perulangan pada For
        cout << "Masukan Nilai\t: ";
        cin >> mhs.nilai[i];
        cout << "Masukan Kelas\t: ";
        cin >> mhs.kelas[i];
        cout << "Masukan Semester: ";
        cin >> mhs.smt[i];
        cout << "Masukan Gender\t: ";
        cin >> mhs.gender[i];
        cout << endl;
    }   


    pilih: //Target Class untuk menentukan pilihan pada program yang ingin dijalankan
    menu_pilih(); // Memanggil fungsi menu pada Void
    cout << "Masukan pilihan\t: ";
    cin >> pilihan;

    switch (pilihan){
        case 1:
        goto des_nilai;  //Descending Nilai
        break;

        case 2:
        goto des_nama; //Descending Nama
        break;
        
        case 3:
        goto des_kelas; //Descending Kelas
        break;

        case 4:
        goto des_smt; //Descending Semester
        break;

        case 5:
        goto des_gender; //Descending Gender
        break;

        case 6:
        goto selesai;
        break;

        default:
        cout << "masukan salah"<<endl;
        goto program; //Jika salah maka akan mengulang kembali kepengi inputan data
        break;
    }
    

//proses selectionsort
    des_nama: //Target Class Descending untuk switch
    for ( int i=0; i<n; i++) // Untuk memindahkan variable yang belum ter urutkan 
    {
            indeks=i; // variable sementar
        for (int j=i+1; j<n; j++)
        {

            if (mhs.nama[i] < mhs.nama[j]){ // untuk mencari variable yang belum terurutjika I lebih besar dari J maka Descending jika Lebih Kecil maka Ascending
            indeks=j; // variable sementara
            tukar=mhs.nama[j]; //tukar - > variable sementara untuk tipe data String pada J
            tmp=mhs.nilai[j]; // Tmp -> variable sementar untuk tipe data Integer pada J
            ganti=mhs.kelas[j]; // ganti -> variable sementara untuk tipe data Char pada J
            tmp=mhs.smt[j]; // variable sementara 
            ganti=mhs.gender[j]; // variable sementara                                    
            
            }
        }
        tukar1= mhs.nama[i]; //Jika program berhasil maka akan menukar variable nama 
        mhs.nama[i]=mhs.nama[indeks]; //menukar dari indeks ke i
        mhs.nama[indeks]=tukar1; // menukar dari tukar1 ke indeks

        tmp1=mhs.nilai[i];
        mhs.nilai[i]=mhs.nilai[indeks];
        mhs.nilai[indeks]=tmp1;

        ganti1= mhs.kelas[i];
        mhs.kelas[i]=mhs.kelas[indeks];
        mhs.kelas[indeks]=ganti1;

        tmp1=mhs.smt[i];
        mhs.smt[i]=mhs.smt[indeks];
        mhs.smt[indeks]=tmp1;

        ganti1= mhs.gender[i];
        mhs.gender[i]=mhs.gender[indeks];
        mhs.gender[indeks]=ganti1;

    }goto akhir; // Menuju ke tampilan akhir

    des_nilai: //descending nilai
    for ( int i=0; i<n; i++)
    {
            indeks=i;
        for (int j=i+1; j<n; j++)
        {

            if (mhs.nilai[i] < mhs.nilai[j]){
            indeks=j;
            tukar=mhs.nama[j];
            tmp=mhs.nilai[j];
            ganti=mhs.kelas[j];
            tmp=mhs.smt[j];
            ganti=mhs.gender[j];
            
            }
        }
        tukar1= mhs.nama[i];
        mhs.nama[i]=mhs.nama[indeks];
        mhs.nama[indeks]=tukar1;

        tmp1=mhs.nilai[i];
        mhs.nilai[i]=mhs.nilai[indeks];
        mhs.nilai[indeks]=tmp1;

        ganti1= mhs.kelas[i];
        mhs.kelas[i]=mhs.kelas[indeks];
        mhs.kelas[indeks]=ganti1;

        tmp1=mhs.smt[i];
        mhs.smt[i]=mhs.smt[indeks];
        mhs.smt[indeks]=tmp1;

        ganti1= mhs.gender[i];
        mhs.gender[i]=mhs.gender[indeks];
        mhs.gender[indeks]=ganti1;

    }goto akhir;

des_kelas: //Descending Kelas
    for ( int i=0; i<n; i++)
    {
            indeks=i;
        for (int j=i+1; j<n; j++)
        {

            if (mhs.kelas[i] < mhs.kelas[j]){
            indeks=j;
            tukar=mhs.nama[j];
            tmp=mhs.nilai[j];
            ganti=mhs.kelas[j];
            tmp=mhs.smt[j];
            ganti=mhs.gender[j];
            
            }
        }
        tukar1= mhs.nama[i];
        mhs.nama[i]=mhs.nama[indeks];
        mhs.nama[indeks]=tukar1;

        tmp1=mhs.nilai[i];
        mhs.nilai[i]=mhs.nilai[indeks];
        mhs.nilai[indeks]=tmp1;

        ganti1= mhs.kelas[i];
        mhs.kelas[i]=mhs.kelas[indeks];
        mhs.kelas[indeks]=ganti1;

        tmp1=mhs.smt[i];
        mhs.smt[i]=mhs.smt[indeks];
        mhs.smt[indeks]=tmp1;

        ganti1= mhs.gender[i];
        mhs.gender[i]=mhs.gender[indeks];
        mhs.gender[indeks]=ganti1;

    }goto akhir;

des_smt: //Descending Semester
    for ( int i=0; i<n; i++)
    {
            indeks=i;
        for (int j=i+1; j<n; j++)
        {

            if (mhs.smt[i] < mhs.smt[j]){
            indeks=j;
            tukar=mhs.nama[j];
            tmp=mhs.nilai[j];
            ganti=mhs.kelas[j];
            tmp=mhs.smt[j];
            ganti=mhs.gender[j];
            
            }
        }
        tukar1= mhs.nama[i];
        mhs.nama[i]=mhs.nama[indeks];
        mhs.nama[indeks]=tukar1;

        tmp1=mhs.nilai[i];
        mhs.nilai[i]=mhs.nilai[indeks];
        mhs.nilai[indeks]=tmp1;

        ganti1= mhs.kelas[i];
        mhs.kelas[i]=mhs.kelas[indeks];
        mhs.kelas[indeks]=ganti1;

        tmp1=mhs.smt[i];
        mhs.smt[i]=mhs.smt[indeks];
        mhs.smt[indeks]=tmp1;

        ganti1= mhs.gender[i];
        mhs.gender[i]=mhs.gender[indeks];
        mhs.gender[indeks]=ganti1;

    }goto akhir;

des_gender: //Descending Gender
    for ( int i=0; i<n; i++)
    {
            indeks=i;
        for (int j=i+1; j<n; j++)
        {

            if (mhs.gender[i] < mhs.gender[j]){
            indeks=j;
            tukar=mhs.nama[j];
            tmp=mhs.nilai[j];
            ganti=mhs.kelas[j];
            tmp=mhs.smt[j];
            ganti=mhs.gender[j];
            
            }
        }
        tukar1= mhs.nama[i];
        mhs.nama[i]=mhs.nama[indeks];
        mhs.nama[indeks]=tukar1;

        tmp1=mhs.nilai[i];
        mhs.nilai[i]=mhs.nilai[indeks];
        mhs.nilai[indeks]=tmp1;

        ganti1= mhs.kelas[i];
        mhs.kelas[i]=mhs.kelas[indeks];
        mhs.kelas[indeks]=ganti1;

        tmp1=mhs.smt[i];
        mhs.smt[i]=mhs.smt[indeks];
        mhs.smt[indeks]=tmp1;

        ganti1= mhs.gender[i];
        mhs.gender[i]=mhs.gender[indeks];
        mhs.gender[indeks]=ganti1;

    }goto akhir;

    //tampilan akhir
    akhir: //Target class Akhir Menuju ke tamoilan akhir
    for(int i = 0; i < n; i++){
        garis(); // Memanggil funsi void
        cout <<"nama\t: " << mhs.nama[i] << endl;
        cout <<"nilai\t: " << mhs.nilai[i] << endl;
        cout <<"kelas\t: " << mhs.kelas[i] << endl;
        cout <<"semester: " << mhs.smt[i] << endl;
        cout <<"gender\t: " << mhs.gender[i] << endl;
    }
    garis(); // Memanggil funsi Void
    goto pilih; // Target kelas menuju menu pilihan

    selesai:
    cout << "TERIMAKASIH" << endl;

    return 0;
}
