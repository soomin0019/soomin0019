package Practice;
import java.util.*;
import java.util.Scanner;

public class Beakjoon1 {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		
		int Burger[] = new int[3];
		int Drink[] = new int[2];
 		
		int Bmin = 2000; //버거값 최대
		int Dmin = 2000;  //음료값 최대
		
		for(int i=0; i<3;i++) {
			Burger[i] = scanner.nextInt();  //입력받은 값 3개 저장
			if(Burger[i] < Bmin) 
				Bmin = Burger[i];
		}
		for(int i=0; i<2; i++) {             //입력받은 값 2개 저장
			Drink[i] = scanner.nextInt();
			if(Drink[i] < Dmin)
				Dmin = Drink[i];
		}
		System.out.println(Bmin+Dmin-50);
	}
}
