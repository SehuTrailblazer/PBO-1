import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Variabel
        int a = 10;

        // Tipe data
        int num = 5;
        double pi = 3.14;
        char grade = 'A';

        // Perulangan for
        for (int i = 0; i < 5; i++) {
            System.out.println("Perulangan For Java iterasi " + i);
        }

        // Pernyataan if
        if (a > 0) {
            System.out.println("Pernyataan If Java: a adalah bilangan positif");
        }

        // Perulangan while
        int j = 0;
        while (j < 5) {
            System.out.println("Perulangan While Java iterasi " + j);
            j++;
        }

        // Perulangan do-while
        int k = 0;
        do {
            System.out.println("Perulangan Do-While Java iterasi " + k);
            k++;
        } while (k < 5);

        // Array satu dimensi
        int[] arr = {1, 2, 3, 4, 5};

        // Array multidimensi
        int[][] multiArr = {{1, 2, 3}, {4, 5, 6}};

        // Input
        Scanner scanner = new Scanner(System.in);
        System.out.print("Masukkan sebuah angka: ");
        int userInput = scanner.nextInt();

        // Output
        System.out.println("Output Java: Pengguna memasukkan " + userInput);
    }
}
