/*
 * javac -d bin src/ps1/hello/Hello.java
 * java -cp ./bin ps1/hello/Hello or java -classpath ./bin ps1/hello/Hello
 */

package ps1.hello;

import java.util.Scanner;

public class Hello {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.printf("Input your name: ");
        String name = scanner.next();

        System.out.println("Hello " + name + "!");
    }
}
