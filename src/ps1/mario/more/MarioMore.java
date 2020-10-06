/*
 *   --#  #--   i0
 *   -##  ##-   i1
 *   ###  ###   i2 < n3
 */

package ps1.mario.more;

import java.util.Scanner;

public class MarioMore {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n;

        do {
            System.out.print("Height: ");
            n = scanner.nextInt();
        } while (n < 0 || n > 23);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - 1 - i; j++) {
                System.out.print(" ");              // печатаем " " до #
            }
            for (int j = 0; j < i + 1; j++) {
                System.out.print("#");              // печатаем # до " "
            }
            for (int j = 0; j < 2; j++) {
                System.out.print(" ");              // печатаем " "
            }
            for (int j = 0; j < i + 1; j++) {
                System.out.print("#");              // печатаем #
            }
            System.out.println("");
        }
    }
}
