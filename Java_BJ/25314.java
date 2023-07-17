package algorithm;
import java.util.*;

public class Beakjoon {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int l = 4;
        int i =1;

        while (N-l > 2){
            N = N-l;
            i++;
        }

        for(int j = 0; j<i; j++){
            System.out.printf("long ");
        }
        System.out.println("int");

    }
}
