obj = main.o Str.o # 생성될파일의이름정의
tar = main # 실행파일의이름정의
flag = -g -c # 컴파일명령어를 정의
cc = g++
# obj들을만들고 사용한다.
$(tar): $(obj) Str.h
	$(cc) -o $(tar) $(obj)
# 각 소스파일을오브젝트 파일로 컴파일하기 위한 규칙
%.o: %.cpp
	$(cc) $(flag) -o $@ $<
# 생성한파일들을지우는경우
clean:
	rm $(tar) $(obj)
# 파일이름이 특이한 경우처리하기
.PHONY: clean
