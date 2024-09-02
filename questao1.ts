function inFibonacci(n: number): boolean {
    if (n < 0) return false;
    let a = 0, b=1;
    if (n == a || n == b) return true;
    while (b <= n) {
        let temp = a + b;
        a = b;
        b = temp;
        if (b === n) return true;
    }

    return false;
}
const numberToCheck: number = 21;

if (isFibonacciNumber(numberToCheck)) {
    console.log(`${numberToCheck} pertence à sequência de Fibonacci.`);
} else {
    console.log(`${numberToCheck} não pertence à sequência de Fibonacci.`);
}
