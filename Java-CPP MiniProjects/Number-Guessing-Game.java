
import java.util.Scanner;

public class numberGuessingGame {

	public static void main(String[] args) {

		System.out.println("=========================================================");
		System.out.println("\n\t\tNUMBER GUESSING GAME");
		System.out.println("\n=========================================================");

		System.out.println(
				"\n=> We have selected a random number between 1 and 100.\n=> See if you can guess it in 10 turns or fewer.\n=> We'll tell you if your guess was too high or too low.");

		Scanner sc = new Scanner(System.in);
		int guess[] = new int[10];

		int upperBound = 100;
		int lowerBound = 1;
		int random = lowerBound + (int) (Math.random() * ((upperBound - lowerBound) + 1));

		for (int i = 0; i < 10; i++) {

			if (i > 0) {
				System.out.print("\nPrevious guesses : ");
				for (int j = 0; j < i; j++)
					System.out.print(guess[j] + " ");
			}

			System.out.println("\nEnter guess " + (i + 1) + ": ");
			guess[i] = sc.nextInt();

			if (guess[i] == random) {
				System.out.println("Congratulations! You got it right!");
				System.out.println("Total attempts : " + (i + 1));
				break;
			}

			else if (guess[i] < random && i < 9) {
				System.out.println("Wrong! Last guess was too low!");
			}

			else if (guess[i] > random && i < 9) {
				System.out.println("Wrong! Last guess was too high!");
			}

			else {
				System.out.println("!!! GAME OVER !!!");
			}

		}
		sc.close();

	}

}
