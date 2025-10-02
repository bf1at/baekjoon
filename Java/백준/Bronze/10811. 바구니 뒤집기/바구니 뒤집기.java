import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n, m, basket[] = new int[101], a, b, temp;
        n = sc.nextInt();
        m = sc.nextInt();
        for(int i=1; i<=n; i++)
        	basket[i] = i;
        for(int i=0; i<m; i++) {
        	a = sc.nextInt();
        	b = sc.nextInt();
        	for(int j=0; j<(b-a+1)/2; j++) {
        		temp = basket[a+j];
        		basket[a+j] = basket[b-j];
        		basket[b-j] = temp;
        	}
        }
        for(int i=0; i<n; i++)
        	System.out.print(basket[i+1]+" ");
    }
}
