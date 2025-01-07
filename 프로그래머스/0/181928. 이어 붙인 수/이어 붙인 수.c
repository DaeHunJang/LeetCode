#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// num_list_len은 배열 num_list의 길이입니다.
int solution(int num_list[], size_t num_list_len) {
	int answer = 0;
	char odd_num[10]="";
	char even_num[10]="";
	char buffer[10];
	int i;

	for (i = 0; i < num_list_len; i++) {
		sprintf(buffer, "%d", num_list[i]);
		if (num_list[i] % 2 == 0) strcat(even_num, buffer);
		else strcat(odd_num, buffer);
	}
	answer = atoi(even_num) + atoi(odd_num);
	return answer;
}