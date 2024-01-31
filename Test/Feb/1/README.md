# BJ1003 피보나치 함수
```
int fibonacci(int n) {
    if (n == 0) {
        printf("0");
        return 0;
    } else if (n == 1) {
        printf("1");
        return 1;
    } else {
        return fibonacci(n‐1) + fibonacci(n‐2);
    }
}
```
여기서 1과 0이 호출되는 수를 구해야 한다.

먼저 규칙을 찾아본다.

N|0|1|
---|---|---|
0|1|0|
1|0|1|
2|1|1|
3|1|2|

이런식으로 0 부터 시작을 해야한다.
