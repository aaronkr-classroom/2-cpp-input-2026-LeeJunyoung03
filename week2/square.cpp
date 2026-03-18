#include <iostream>

//표준 라이브러리에서 가져와서 사용할 이름을 언급
using std::cin;
using std::cout;
using std::endl;

// *로 네모 만들기
int main(void) {
	cout << "1.Square OR 2.Rect? >>> ";

	int option;
	cin >> option;
	if (option != 1 && option != 2) {
		cout << "Error: Only choose 1 or 2";
		return 0x34F;	//16진법(hex)
	}
	cout << "What size square? >>> ";

	int size;
	cin >> size; //10

	//행출력
	for (int i = 0; i < size; i++) {
		//열출력
		for (int j = 0; j < size; j++) {
			if (option == 1) {
				cout << "*";	//10X10square
			}
			else if (option==2){
				cout << "**";	//20X10직사각형
			}
			
		}
		//행 끝 줄 바꿈
		cout << endl;
	}
	return 0;
}