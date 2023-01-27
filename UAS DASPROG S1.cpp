#include <iostream>
using namespace std;

struct pilihan {
	string  ftr_keceptn, ftr_audio, ftr_audio2, ftr_audio3, ftr_filtr,
            inshot_cut, inshot_cut2, inshot_teks, inshot_dpl,
            vn_vlm, vn_vlm2, vn_ptng, vn_ptng2, vn_hps, vn_hps2;

};

void aplikasieditorvideo() {
    int pilihan_apk;
	char ulang;
	do {
    MENU :
	cout << "===============================================\n";
	cout << "\t PROGRAM APLIKASI EDITOR VIDEO \t\t\t\n";
	cout << "===============================================\n";
    cout << "1. Aplikasi Editor Inshot" << endl;
	cout << "2. Aplikasi Editor CapCut" << endl;
	cout << "3. Aplikasi Editor Vlog Now" << endl;
    cout << "----------------------------------------------- \n";
    cout << "Pilih Menu : ";
    cin >> pilihan_apk;
    cout << "================ \n";

    pilihan ftr [15];
    ftr [0].inshot_cut 	= " 1. Pilih video yang akan diedit\n 2. Pilih fitur pra-potong\n 3. Pilih trim (untuk memtong diawal atau akhir video)\n";
    ftr [0].inshot_cut2 = " 4. Pilih cut untuk memotong bagian tengah video\n 5. Pilih split (untuk membelah video)";
	ftr [1].inshot_teks = " 1. Bukalah fitur teks di aplikasi inshot\n 2. Tulis kata-kata yang kamu inginkan dan ceklis jika selesai\n 3. Aturlah posisi teks agar sesuai dengan video\n";
	ftr [2].inshot_dpl 	= " 1. Pilih bagian video yang ingin di duplikat\n 2. Pilih fitur duplikat maka video yang kamu pilih akan tercopy";
	ftr [3].ftr_keceptn = " 1. Bukalah fitur edit\n 2. Pilih fitur kecepatan\n 3. Lalu pilih ingin menggunakan kecepatan normal atau kecepatan kurva\n";
	ftr [4].ftr_audio 	= " 1. Bukalah fitur audio\n 2. Pilih fitur suara (untuk mengekstrak suara dari musik yang kamu inginkan)\n ";
	ftr [4].ftr_audio2 	= "3. Pilih fitur efek (untuk menambahkan musik bawaan capcut)\n 4. Disana kamu bisa menambahkan efek suara\n";
	ftr [4].ftr_audio3 	= " 5. Pilih fitur diekstrak (untuk mengekstrak suara dari video)\n 6. Pilih fitur rekam (untuk menambah rekaman suara)\n";
	ftr [5].ftr_filtr 	= " 1. Buka fitur filter\n 2. Kamu bisa memilih efek yang kamu inginkan\n";
	ftr [6].vn_vlm 		= " 1. Pilih video yang ingin di edit\n 2. Pilih fitur volume, lalu sesuaikan volemu suara sesuai dengan yang kamu inginkan\n";
	ftr [6].vn_vlm2 	= " 3. Pilih terftran semua bila kamu ingin mengubah ukuran suara untuk semua video\n 4. Pilih ceklis satu bila hanya video yang dipilih saja yang volumenya berbubah\n";
	ftr [7].vn_ptng 	= " 1. Pilih fitur potong\n 2. Pilih ukuran 16:9 (ukuran youtube)\n ";
	ftr [7].vn_ptng2 	= "3. Pilih ukuran 1:1/4:5 (ukuran instagram)\n 4. Pilih ukuran 9:16 (ukuran tiktok)\n";
	ftr [8].vn_hps 		= " 1. Pilih video yang ingin dihapus\n 2. Atau split video untuk memisahkan dari video yang tidak ingin dihapus\n ";
	ftr [8].vn_hps2 	= "3. Pilih fitur hapus yang berbentuk tempat sampah\n";

    switch (pilihan_apk){
    	case 1:
    		system ("cls");
				char ulang1;
				do {
				char pilih_fitur;

					cout << "==========Aplikasi Inshot============" << endl;
					cout << "a. Cara Mengcut Video \n";
					cout << "b. Cara Menambahkan Teks \n";
					cout << "c. Cara Menduplikat Video \n";
					cout << "================ \n";
					cout << "Pilih fitur : ";
					cin >> pilih_fitur;
					cout << "================ \n";
					switch (pilih_fitur){
						case 'a':
						    cout << "Cara Mengcut Video di Aplikasi Inshot\n";
                			cout << ftr [0].inshot_cut;
                			cout << ftr [0].inshot_cut2;
						    break;
						case 'b':
                            cout << "Cara Menambahkan Teks Pada Video di Aplikasi Inshot\n";
                			cout << ftr [1].inshot_teks;
						    break;
						case 'c':
						    cout << "Cara Menduplikat Video di Aplikasi Inshot\n";
                			cout << ftr [2].inshot_dpl;
						    break;
						default :
						    cout << "tidak ada fitur yang dipilih\n";
							}
							cout << endl;
							cout << "pilih fitur lain? (y/t) : ";
							cin >> ulang1;
							cout << endl;
							}
							while (ulang1 != 't');
							cout << "akhir dari program\n";
    						break;
    	case 2:
    		system ("cls");
				char ulang2;
				do {
				char pilih_vct;

                    cout << "==========Aplikasi CapCut============\n";
					cout << "a. Cara Mengatur Kecepatan Video \n";
					cout << "b. Menambah Efek Suara \n";
					cout << "c. Efek Filter \n";
					cout << "================ \n";
					cout << "pilih_fitur : ";
					cin >> pilih_vct;
					cout << "================ \n";
					switch (pilih_vct){
						case 'a':
						    cout << " cara mengatur kecepatan video di aplikasi capcut : \n";
						    cout << ftr [3].ftr_keceptn;
						    break;
						case 'b':
						    cout << "untuk menambah efek suara pada aplikasi capcut : \n";
						    cout << ftr [4].ftr_audio;
                			cout << ftr [4].ftr_audio2;
                			cout << ftr [4].ftr_audio3;
						    break;
						case 'c':
                            cout << "cara menambahkan efek filter di aplikasi capcut : \n";
						    cout << ftr [5].ftr_filtr;
						    break;
						default :
						    cout << "tidak ada fitur yang dipilih\n";
							}
							cout << endl;
							cout << "pilih fitur lain? (y/t) : ";
							cin >> ulang2;
							}
							while (ulang2 != 't');
							cout << "akhir program\n";
    		break;
    	case 3:
    		system ("cls");
				char ulang3;
				do {
				char pilih_fictur;

					cout << "==========Aplikasi VlogNow (VN)============" << endl;
					cout << "a. Cara Mengatur Volume Suara Video \n";
					cout << "b. Cara Mengubah Ukuran Asli Video \n";
					cout << "c. Cara Menghapus Bagian Video Yang Tidak Diinginkan \n";
					cout << "================ \n";
					cout << "Pilih fiktur : ";
					cin >> pilih_fictur;

					switch (pilih_fictur){
						case 'a':
							cout << "Cara Mengubah Volume Suara Video di Aplikasi VN\n";
						    cout << ftr [6].vn_vlm;
						    cout << ftr [6].vn_vlm2;
						    break;
						case 'b':
						    cout << "Cara Mengukur Ukuran Asli Video Menjadi Ukuran Lain\n";
						    cout << ftr [7].vn_ptng;
						    cout << ftr [7].vn_ptng2;
						    break;
						case 'c':
						    cout << "Cara Mengahapus Video di Aplikasi VN \n";
						    cout << ftr [8].vn_hps;
						    cout << ftr [8].vn_hps2;
							break;
						default :
						    cout << "tida ada fitur yang dipilih\n";
							}
							cout << endl;
							cout << "pilih fitur lain? (y/t) : ";
							cin >> ulang3;
							}
							while (ulang3 != 't');
							cout << "akhir program\n";
    		break;
    	default :
    		cout << "tidak ada pilihan apk\n";
	}
    cout << endl;
	cout << "pilih ulang program aplikasi editor? (y/t) : ";
	cin >> ulang;
	cout << endl;
    system ("cls");
	} while (ulang != 't');
	cout << endl;
	cout << "\t#program selesai dijalankan#\n";
	cout << "=========================================\n";
	cout << "\t\t THE END \t\t\t\n";
	cout << "=========================================\n";
}
int main() {
	aplikasieditorvideo();
}
