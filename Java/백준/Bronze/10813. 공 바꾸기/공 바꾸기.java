import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n, m, a, b, temp;
        n = sc.nextInt();
        m = sc.nextInt();
        int basket[] = new int[n+1];
        for(int i=1; i<=n; i++) {
        	basket[i] = i;
        }
        for(int i=0; i<m; i++) {
        	a = sc.nextInt();
        	b = sc.nextInt();
        	temp = basket[a];
        	basket[a] = basket[b];
        	basket[b] = temp;
        }
        for(int i=1; i<=n; i++)
        	System.out.print(basket[i]+" ");
    }
    
}
