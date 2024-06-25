#include "Array.h" // Array 클래스의 선언을 포함합니다.
#include <cstdlib>
#include<iostream> // 입출력 관련 헤더 파일을 포함합니다.
using namespace std; // std 네임스페이스를 사용합니다.

// Array 클래스의 생성자
Array::Array(int size) {
	if ((size>0)){ // size가 0보다 큰 경우에만 배열을 생성합니다.
		data = new int[size]; // 동적 할당을 통해 배열을 생성합니다.
		len= size ;  // len 멤버 변수에 배열의 크기를 저장합니다.
	}
	else{ // size가 0보다 작거나 같은 경우 에러 메시지를 출력합니다.
 		cout<< "Array bound error!!"<<endl ; 
	}
	
}

// Array 클래스의 소멸자
Array::~Array() {
	delete[] data; // 동적 할당된 배열을 해제합니다.
}

// 배열의 길이를 반환하는 멤버 함수
int Array::length() const
{
	return len; // len 멤버 변수의 값을 반환합니다.
}

// 인덱스 연산자 오버로딩 (비상수 버전)
int& Array::operator[](int i) {
	static int tmp; // 에러 시 반환할 임시 변수
	
	if (0<=i && i<len) return data[i]; // 유효한 인덱스인 경우 배열 요소를 반환합니다.
	else { // 유효하지 않은 인덱스인 경우 에러 메시지를 출력하고 tmp를 반환합니다.
		cout << "Array bound error!" << endl;
		return tmp;
	}
}

// 인덱스 연산자 오버로딩 (상수 버전)
int Array::operator[](int i) const {
	if (0<=i && i<len) return data[i]; // 유효한 인덱스인 경우 배열 요소를 반환합니다.
	else { // 유효하지 않은 인덱스인 경우 에러 메시지를 출력하고 0을 반환합니다.
		cout << "Array bound error!" << endl;
		return 0;
	}
}

// 배열의 내용을 출력하는 멤버 함수
void Array::print() {
	int i;
	cout << "["; // 배열의 시작을 나타냅니다.
	for( i=0; i<len; i++)
		cout << " " << data[i]; // 배열의 각 요소를 공백을 두고 출력합니다.
	cout << "]" << endl; // 배열의 끝을 나타냅니다.
}
