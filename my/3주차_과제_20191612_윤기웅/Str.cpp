#include <cstdlib>//일반함수들라이브러리
#include "Str.h" //정의된해더파일불러오기
#include <cstring>//문자열함수들 라이브러리
Str::Str(int leng) {
    len = leng; //해당문자열길이저장
    int newlen = len+1 ; 
    str = new char[newlen];//새로운문자열배열형성하기
    str[0] = '\0';//배열의 마지막채우기 
    return ;
}

Str::Str(char* neyong) { 
    len = strlen(neyong);//새문자열길이저장하기
    if (strlen(neyong)<=0){
        return ; 
    }
    int newlen = len+ 1 ; 
    str = new char[newlen]; //새 문자열 생성, 초기화
    strcpy(str, neyong);//문자열복사하기 
    str[len] = '\0';//배열마지막채우기
    return ; 
}

int Str::length(void) { 
    return len;//문자열의 길이를반환하는역할
}
char *Str::contents(void) {
    return str;//문자열을 반환하는역할접근자 역랗 
}

Str::~Str() { 
    // 소멸자
    delete []str; }

int Str::compare(char *a) { 
    return strcmp(str, a);//문자열 외부의 것이랑비교해서같으면1반환
}

int Str::compare(class Str &a) {
    return strcmp(str, a.contents());//서로간의문자열을비교하고순서에따라1혹은0등을반환
}


void Str::operator=(char *a) {
    if (!a) { 
        len = 0;
        delete []str;//기존메모리를제거한다
		str = new char[1];//새매모리를1만할당한다
        str[0] = '\0';//매모리값채우기 
    }
    if(!(!a)){
        int newlen = strlen(a);//새로운길이 
        if (len+1 < newlen+1 ) { //기존길이와비교하기 
        int forchar = newlen+1 ; //새로운 길이 생성
		delete []str;//메모리를 제거한다기존
		str = new char[forchar];//새로운길이로할당한다
	    }else{
            len = newlen;//새로운길이로바꾸기
            strcpy(str, a);//내용복사하기 
            str[len] = '\0';//마지막을채우기
        }
    }
    

    
}
void Str::operator=(class Str &a) {
  int alen = strlen(a.contents()) ; 
  delete [] str;//기존의 문자열제거하기
  if (alen <0 || alen==0){//새로오는 것의문자열이이상한경우
    len = 0 ; //길이0으로 바꿔주고
    return ; 
  }
  len =strlen(a.contents()); //길이재정의하기
  int newlen = len+1; //마지막개행문자까지 포함하기위해
  str = new char[newlen] ;//문자열을다시정의하고
  strcpy(str,a.contents()) ;//문자열복사하기 
  str[len] = '\0' ; //개행문자 넣어주기
  return ; 

}
