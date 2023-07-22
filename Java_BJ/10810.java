package algorithm;
import java.util.*;

public class Beakjoon {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        int[] N = new int[n];

        for(int i=0; i<m; i++){
            int st = sc.nextInt();
            int en = sc.nextInt();
            int K = sc.nextInt();
            for(int j = st-1; j < en; j++){
                N[j] = K;
            }
        }

        for(int i=0; i<n; i++){
            System.out.printf("%d ", N[i]);
        }
    }
}
