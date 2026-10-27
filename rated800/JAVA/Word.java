package JAVA;
// Programmer  - Chimango Mughogho
// CodeForces' Program - Soldier and Banana (rated 800)
// 26 Oct, 2026
 

import java.util.Scanner;

public class Word {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        sc.close();

        int upper = 0;
        int lower = 0;

        int n = s.length();

        for(int i = 0; i < n; i++){
            char c = s.charAt(i);
            if(Character.isUpperCase(c)){
                upper++;
            }else{
                lower++;
            }
        }

        if(upper == lower){
            String word = s.toLowerCase();
            System.out.println(word);
        }else{
            String word = s.toUpperCase();
            System.out.println(word);
        }
    }
    
}

