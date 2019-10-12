import java.util.Scanner;

class Hangover{
	public static void main(String[] args){

		float n;
		float cnt ;
		float sum ;
	    Scanner sc = new Scanner(System.in);
		while(true){
			n = sc.nextFloat();
			sum = 0;
			cnt = 2;
			if(n == 0)
				break;
			while(sum <= n){
				sum = sum + 1/cnt;
				cnt++;
			}
            System.out.println((int)(cnt - 2) + " " + "card(s)");

		}
	}
}