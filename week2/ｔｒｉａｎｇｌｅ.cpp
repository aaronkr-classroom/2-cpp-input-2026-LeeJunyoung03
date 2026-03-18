#include <iostream>

//표준 라이브러리에서 가져와서 사용할 이름을 언급
using std::cin;
using std::cout;
using std::endl;

// *로 네모 만들기
int main(void) {
	
	cout << "What size triangle? >>> ";

	int size;
	cin >> size; //10


	//행출력
	for (int i = 0; i < size; i++) {
		//열출력
		for (int j = 0; j < i; j++) {
				cout << " ";	//10X10square
		}
		for (int k = 0; k < (2 * size) + 1 + (i * 2); k++) {
			cout << "*";
		}
		//행 끝 줄 바꿈
		cout << endl;
	}
	return 0;
}