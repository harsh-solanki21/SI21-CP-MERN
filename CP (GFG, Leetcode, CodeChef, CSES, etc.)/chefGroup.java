
// SOLUTION 1

import java.util.Scanner;

public class ChefAndGroups {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();

		for (int a = 0; a < t; a++) {

			sc.nextLine();
			String s = sc.next();
			int ans = 0;

			for (int i = 0; i < s.length(); i++) {

				if (s.charAt(i) == '1') {

					ans++;
					for (int j = i + 1; j < s.length(); j++) {

						if (s.charAt(j) == '1') {
							i++;
						} 
						else {
							break;
						}

					}

				}

			}

			System.out.println(ans);
		}
	}

}



// SOLUTION 2

import java.util.Scanner;

public class ChefAndGroups {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);

		if (sc.hasNextInt()) {

			int t = sc.nextInt();

			for (int i = 0; i < t; i++) {

				sc.nextLine();
				String s = sc.next();

				int count = 0;
				int oc = 0;

				for (int j = 0; j < s.length(); j++) {

					if (s.charAt(j) == '1') {
						oc = j;
						break;
					}

				}

				String[] arr = s.split("0");

				for (int j = 0; j < arr.length; j++)
					count++;

				System.out.println(count - oc);

			}

		}

	}

}
