#include <iostream>
#include <windows.h>	//windows API Header
#define DEFAULT_CONFIG 7    // 7 being the color code for black background with white text
using namespace std;


int main(){
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	for(int i=1;i<50;++i){
		SetConsoleTextAttribute(hConsole, i);
		cout << "Color Code : "<<i<<"\tThis is sample Text\n"<<endl;
	}
    //reseting color values
    SetConsoleTextAttribute(hConsole, DEFAULT_CONFIG);
}

/*Notes: General background :
colorAttribute = foreground + background*16
where foreground and background represent the respective required color codes.
 A total of 16 different colors are possible. After that a combination of foreground and background colors will take place.

*/
