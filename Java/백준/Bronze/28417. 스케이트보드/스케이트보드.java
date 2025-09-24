import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int n = scanner. nextInt();
		int run, a, max=0;
		for(int i=0; i<n; i++) {
			int sum=0;
			int act[] = new int[5];
			run=0;
			for(int j=0;j<2;j++) {
				a = scanner.nextInt();
				if(a>run)
					run=a;
			}
			for(int j=0; j<5; j++)
				act[j] = scanner.nextInt();
			for(int j=0; j<4; j++) {
				for(int k=0; k<4-j; k++) {
					if(act[k]>act[k+1]) {
						int temp = act[k];
						act[k] = act[k+1];
						act[k+1] = temp;
					}
				}
			}
			sum+=run+act[3]+act[4];
			if(sum>max)
				max = sum;
		}
		System.out.print(max);
		scanner.close();
	}
}
