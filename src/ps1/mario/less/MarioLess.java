/*
 *       #     i = 0
 *      ##     i = 1
 *    j0 j1
 *
 */

package ps1.mario.less;

import java.util.Scanner;

public class MarioLess {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n;

        do {
            System.out.print("Height: ");
            n = scanner.nextInt();
        } while (n < 0 || n > 23);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i + j < n -1) {
                    System.out.print(" ");
                } else {
                    System.out.print("#");
                }
            }
            System.out.println("");
        }
    }
}
