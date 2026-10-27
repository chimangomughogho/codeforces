package JAVA;
// Programmer  - Chimango Mughogho
// CodeForces' Program - Soldier and Banana (rated 800)
// 26 Oct, 2026

import java.util.Scanner;

public class SoldierAndBanana {
    public static void main(String[] args) {
        int priceOfFirstBanana = 0;
        int initialDollars = 0;
        int numberOfBanana = 0;
        int totalPrice = 0;

        Scanner input = new Scanner(System.in);
        priceOfFirstBanana = input.nextInt();
        initialDollars = input.nextInt();
        numberOfBanana = input.nextInt();

        input.close();
        

        for(int i = 1; i <= numberOfBanana; i++){
            totalPrice += (i * priceOfFirstBanana); 
    
        }

        if(initialDollars >= totalPrice){
            System.out.println(0);
        }else{
            int amountToBorrow = totalPrice - initialDollars;
            System.out.println(amountToBorrow);
        }

    }
}   

