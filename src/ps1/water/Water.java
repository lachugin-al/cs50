package ps1.water;

import java.util.Scanner;

public class Water {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int a = 12;

        System.out.printf("Minutes: ");
        int min = scanner.nextInt();

        System.out.println("Bottles: " + (a * min));
    }
}
