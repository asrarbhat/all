
/**
 * if the number is prime return 1 if not return 0 and -1 if invalid input
 * @param {Number} number an integer greater than 1
 * @returns {Number} 1 if the number is prime 0 if not and -1 if invalid input
 */
function isPrime(number) {
    if (typeof number !== "number" || number !== parseInt(number) || number < 2) {
        return -1;
    }
    let prime = 1;
    if (number % 2 === 0 && number !== 2) {
        return 0;
    }
    for (let i = 3; i <= Math.sqrt(number) + 1; i += 2) {
        if (number % i === 0) {
            return 0;
        }
    }
    return 1;
}
for (let i = -5; i < 100; i++) {
    console.log(i, isPrime(i));
}
console.log(isPrime(console.log))
