#include <stdio.h>
#include <stdlib.h>
#include "./include/ft_printf.h"  // ft_printf 함수의 헤더

int main(void)
{
    char *str = "hello,world!";
    int num = 42;
    unsigned int u_num = 123456;
    int hex_num = 255;
    void *ptr = 0;
    char ch = 'A';

    // 문자열 테스트
    printf("===== STRING TEST =====\n");
    printf("original printf : str = [%s]\n", str);
    ft_printf("ft_printf       : str = [%s]\n\n", str);

    // 정수 테스트
    printf("===== INTEGER TEST =====\n");
    printf("original printf : num = [%d]\n", num);
    ft_printf("ft_printf       : num = [%d]\n\n", num);

    // %i 포맷 정수 테스트
    printf("===== %%i FORMAT TEST =====\n");
    printf("original printf : num = [%i]\n", num);
    ft_printf("ft_printf       : num = [%i]\n\n", num);

    // 부호 없는 정수 테스트
    printf("===== UNSIGNED TEST =====\n");
    printf("original printf : u_num = [%u]\n", u_num);
    ft_printf("ft_printf       : u_num = [%u]\n\n", u_num);

    // 16진수 (소문자) 테스트
    printf("===== HEX (lowercase) TEST =====\n");
    printf("original printf : hex = [%x]\n", hex_num);
    ft_printf("ft_printf       : hex = [%x]\n\n", hex_num);

    // 16진수 (대문자) 테스트
    printf("===== HEX (UPPERCASE) TEST =====\n");
    printf("original printf : hex = [%X]\n", hex_num);
    ft_printf("ft_printf       : hex = [%X]\n\n", hex_num);

    // 포인터 테스트
    printf("===== POINTER TEST =====\n");
    printf("original printf : ptr = [%p]\n", ptr);
    ft_printf("ft_printf       : ptr = [%p]\n\n", ptr);

    // 문자 테스트
    printf("===== CHAR TEST =====\n");
    printf("original printf : ch = [%c]\n", ch);
    ft_printf("ft_printf       : ch = [%c]\n\n", ch);

    // 퍼센트 출력 테스트
    printf("===== PERCENT SIGN TEST =====\n");
    printf("original printf : %%\n");
    ft_printf("ft_printf       : %%\n\n");

    return 0;
}
