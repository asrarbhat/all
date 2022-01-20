public class File {
    public static void main(String[] args) {
        for (int i = -5; i < 10; i++) {
            System.out.println(i + " " + isPrime(i));
        }
        // System.out.println(isPrime("hello"));
    }

    /**
     * if number is prime return 1,if not return 0,if invalid input return -1
     * 
     * @param number an integer greater than 1
     * @return 1 if number is prime 0 if not and -1 if invalid input
     */
    public static int isPrime(Integer number) {
        if (!(number instanceof Integer == true) || number < 2) {
            return -1;
        }
        if (number % 2 == 0 && number != 2) {
            return 0;
        }
        for (int i = 3; i <= Math.sqrt(number) + 1; i += 2) {
            if (number % i == 0) {
                return 0;
            }
        }
        return 1;
    }
}