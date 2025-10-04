import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s;
        int a[] = new int['z'+1];
        for(int i='a'; i<='z'; i++)
        	a[i] = -1;
        s = sc.next();
        for(int i=s.length()-1; i>=0; i--) {
        	a[s.charAt(i)] = i;
        }
        for(int i='a'; i<='z'; i++)
        	System.out.printf("%d ",a[i]);
    }
}
