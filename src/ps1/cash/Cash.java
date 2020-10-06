/*
 * minimum number of coins for exchange dollars
 */

package ps1.cash;

import java.util.Scanner;

public class Cash {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("O hai");

        float cash;
        int cents, cents25, cents10, cents5, cents1, coins;

        do {
            System.out.print("How much $ change is owed?: ");
            cash = scanner.nextFloat();
            if (cash == 0) {
                System.out.println("nothing to exchange");
            } else if (cash < 0){
                System.out.println("please repeat");
            } else {
                System.out.println("one moment!");
            }
        } while (cash < 0);

        /*convert float to int
        cash = cash * 10000/100;
        System.out.println(cash + " cents");*/

        cents = (int)(cash * 10000 / 100);
        System.out.println("Total " + cents + " cents");

        // collect minimum coins to change
        cents25 = cents / 25;
        cents = cents - (cents25 * 25);
        cents10 = cents / 10;
        cents = cents - (cents10 * 10);
        cents5 = cents / 5;
        cents = cents - (cents5 * 5);
        cents1 = cents / 1;
        coins = cents25 + cents10 + cents5 + cents1;

        System.out.println(coins + " coins");

        // or
        while (cents > 0) {
            if ((cents - 25) >= 0) {
                cents = cents - 25;
                coins++;
            } else if ((cents - 10) >= 0) {
                cents -= 10;
                coins++;
            } else if ((cents - 5) >= 0) {
                cents -= 5;
                coins++;
            } else if ((cents - 1) >= 0) {
                cents -= 1;
                coins++;
            }
        }
        System.out.println("Total coins: " + coins);
    }
}
