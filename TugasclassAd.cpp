#include <iostream>
#include <string>

using namespace std;

class hp{

	public:
		void pendapat(string survey);
		string kualitas, kelas;
	
};

int main(){
	hp nokia, xiaomi, samsung, sony, iphone;
	
	nokia.kualitas ="Sangat Baik 	";
	xiaomi.kualitas ="Bagus 		";
	samsung.kualitas ="Sangat Bagus 	";
	sony.kualitas ="Baik 		";
	iphone.kualitas ="Baik dan Bagus 	";
	
	nokia.kelas ="Mid End - High End 		  |\n";
	xiaomi.kelas ="Mid End - Low End 		  |\n";
	samsung.kelas ="Mid End - High End 		  |\n";
	sony.kelas ="Mid End - High End - Low End  |\n";
	iphone.kelas ="High End 			  |\n";
	
	cout << " Handphone \n";
	cout << "+---------------+--------------------------------+----------------------------------------+\n";
	cout << "| Nokia		" << "| Kualitas : " <<(nokia.kualitas)	<<" | " <<" Kelas : " << (nokia.kelas);
	cout << "| Xiaomi 	" << "| Kualitas : " <<(xiaomi.kualitas)	<<" | " <<" Kelas : " << (xiaomi.kelas);
	cout << "| Samsung	" << "| Kualitas : " <<(samsung.kualitas)<<" | " <<" Kelas : " << (samsung.kelas);
	cout << "| Sony 		" << "| Kualitas : " <<(sony.kualitas)	<<" | " <<" Kelas : " << (sony.kelas);
	cout << "| Iphone 	" << "| Kualitas : " <<(iphone.kualitas)	<<" | " <<" Kelas : " << (iphone.kelas);
	cout << "+---------------+--------------------------------+----------------------------------------+\n";
	
	cout << " Survey Handphone : \n";
	cout << " ----------------- \n";
	nokia.pendapat	(" Nokia 	: Tahan Lama , Spek Menengah , Bintang 4 ");
	xiaomi.pendapat	(" Xiaomi 	: Lumayan Lama , Spek Tinggi , Bintang 4 ");
	samsung.pendapat(" Samsung 	: Tahan Lama , Spek Menengah Ke Atas , Bintang 4.5 ");
	sony.pendapat	(" Sony 	: Lumayan Lama , Spek Menengah , Bintang 4 ");
	iphone.pendapat	(" Iphone 	: Tahan Lama , Spek Tinggi , Bintang 4.7 ");
} 
	void hp::pendapat(string survey){
		cout<< " - "<<survey<<"Lah hehe \n";
}

