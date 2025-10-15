/*   파일명: function.c
	 내  용: static, extern 활용 (main.c와 소스코드 분리)
	 작성자: 주광연
	 날  짜: 2025.10. 14
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 함수명: get_od()
// 기능: 1001번부터 차례로 유일한 번호를 증가하면서 반환하는 기능
// 입력: 없음
// 반환값: 1001부터 시작해서 1씩 증가하는 유일한 값
// 오류: 없음

static int inc_id(int n);

int get_id(void) {
	static int last_id = 1000;

	last_id = inc_id(last_id);

	return ++last_id;
}

static int inc_id(int n) {
	return n + 1;
}