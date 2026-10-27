package JAVA;
import java.util.Scanner;

public class playjava {
    public static void main(String[] args) {

        int n;
        System.out.print("Enter the desired number of questions(1 - 1000): ");
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        

        while(!(n >= 1 && n <= 1000)) {
            System.out.print("Please enter a number between 1 and 1000: ");
            n = sc.nextInt();
        }
        sc.close();
        int team[] = new int[3];
        int ans = 0;

        for(int i = 0; i < n; i++) {
            int count = 0;
            for(int j = 0; j < 3; j++) {
                team[j] = Math.random() < 0.5 ? 0 : 1;
                System.out.print(team[j] + " ");
                if(team[j] == 1){
                    count++;
                }
            }
            System.out.println();
            if(count >= 2){
                ans++;
            }
        }
        System.out.println(ans);
    }
}

