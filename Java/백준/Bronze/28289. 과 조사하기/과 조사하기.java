import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		
		int n = scanner.nextInt();
		int soft=0, embedded=0, ai=0, first=0;
		int gp, cp, np;
		for(int i=0; i<n; i++) {
			gp = scanner.nextInt();
			cp = scanner.nextInt();
			np = scanner.nextInt();
			if(gp==1)
				first++;
			else {
				if(cp==1||cp==2)
					soft++;
				else if(cp==3)
					embedded++;
				else
					ai++;
			}
		}
		System.out.print(soft+"\n"+embedded+"\n"+ai+"\n"+first);
		
		scanner.close();
	}
}
