#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main(){
	string cmd;
	
	system("clear");
	start :
	// cout << noProv << endl;
	
	cmd = "php ../npsn-per-provinsi.php";
	cout << "Start...\n";
	// this line call php download
	system(cmd.c_str());
	cout << "Selesai...\n";
	cout << "Silahkan check file di folder FILES.\n";
					
    return 0;
}