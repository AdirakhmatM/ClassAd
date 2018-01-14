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
	
} 
