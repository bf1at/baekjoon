import java.math.BigInteger;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        BigInteger N = sc.nextBigInteger();
        
        
        BigInteger four = BigInteger.valueOf(4);
        BigInteger one = BigInteger.ONE;
        
        BigInteger D = one.subtract(four.multiply(one.subtract(N)));
        BigInteger sqrtD = bigIntSqrt(D);
        
        BigInteger K = sqrtD.subtract(BigInteger.ONE).divide(BigInteger.TWO);
        
        System.out.println(K);
        sc.close();
    }
    
    static BigInteger bigIntSqrt(BigInteger n) {
        BigInteger a = BigInteger.ONE;
        BigInteger b = n.shiftRight(5).add(BigInteger.valueOf(8));
        while (b.compareTo(a) >= 0) {
            BigInteger mid = a.add(b).shiftRight(1);
            if (mid.multiply(mid).compareTo(n) > 0) {
                b = mid.subtract(BigInteger.ONE);
            } else {
                a = mid.add(BigInteger.ONE);
            }
        }
        return a.subtract(BigInteger.ONE);
    }
}
