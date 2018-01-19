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
	
	nokia.kualitas ="Nokia : Kualitas Sangat Baik, ";
	xiaomi.kualitas ="Xiaomi : KualitasBagus, ";
	samsung.kualitas ="Samsung : Kualitas Sangat Bagus, ";
	sony.kualitas ="Sony : Kualitas Baik, ";
	iphone.kualitas ="Iphone : Kualitas Baik dan Bagus, ";
	
	nokia.kelas =" Kelas Mid End - High End, ";
	xiaomi.kelas =" Kelas Mid End - Low End, ";
	samsung.kelas =" Kelas Mid End - High End, ";
	sony.kelas =" Kelas Mid End - High End - Low End, ";
	iphone.kelas =" Kelas High End, ";
	
	nokia.pendapat	(" Tahan Lama , Spek Menengah , Bintang 4 ");
	xiaomi.pendapat	(" Lumayan Lama , Spek Tinggi , Bintang 4 ");
	samsung.pendapat(" Tahan Lama , Spek Menengah Ke Atas , Bintang 4.5 ");
	sony.pendapat	(" Lumayan Lama , Spek Menengah , Bintang 4 ");
	iphone.pendapat	(" Tahan Lama , Spek Tinggi , Bintang 4.7 ");
} 
	void hp::pendapat(string survey){
		cout<< " - "<<kualitas<<" ";
		cout<< " "<<kelas<<" ";
		cout<< " - "<<survey<<"Lah hehe \n";
	
}

