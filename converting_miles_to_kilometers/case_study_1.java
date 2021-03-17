// Converts distance in miles to kilometers

import java.util.Scanner;

class case_study_1 {

    public static void main(String []args) {

        double miles=0;
        double kilometers=0;
        double kilometers_per_miles = 1.609;
        Scanner scan = new Scanner(System.in);

        System.out.print("Enter the distance in miles : ");
        miles = scan.nextInt();
        kilometers = kilometers_per_miles * miles;
        System.out.println(miles+" miles equals to "+kilometers+" kilometers.");
    }
}
