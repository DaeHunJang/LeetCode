#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// num_list_len은 배열 num_list의 길이입니다.
int* solution(int num_list[], size_t num_list_len) {
    // 반환할 배열의 크기는 num_list_len + 1
    int* answer = (int*)malloc((num_list_len + 1) * sizeof(int));
    if (answer == NULL) {
        return NULL;
    }

    for (size_t i = 0; i < num_list_len; i++) {
        answer[i] = num_list[i];
    }

    if (num_list_len >= 2) {
        if (num_list[num_list_len - 1] > num_list[num_list_len - 2]) {
            answer[num_list_len] = num_list[num_list_len - 1] - num_list[num_list_len - 2];
        } else {
            answer[num_list_len] = num_list[num_list_len - 1] * 2;
        }
    } else {
        answer[num_list_len] = 0;
    }

    return answer;
}