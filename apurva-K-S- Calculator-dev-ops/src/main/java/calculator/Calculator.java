package calculator;

import java.util.InputMismatchException;
import java.util.Scanner;
import org.apache.logging.log4j.LogManager;
import org.apache.logging.log4j.Logger;

public class Calculator {

    private static final Logger logging = LogManager.getLogger(Calculator.class);
    private double num1, num2;
    private static final Scanner scanner = new Scanner(System.in);

    public Calculator(){

    }

    public static void main(String[] args) {

        Calculator calculator = new Calculator();

        System.out.println("Welcome to Calculator Devops Mini project!!");
        int ch;
        boolean flag=true;
        while(flag){
            System.out.println("1. Square root\n2. Factorial\n3. Natural Logarithm\n4. Power Function\n5. Exit");
            System.out.println("choose an option: ");

            try {
                ch = scanner.nextInt();
            } catch (InputMismatchException error) {

                logging.error("[ERROR]: Value type mismatch. Expected Integer got some other type. Please enter again. Thank you :)");

                System.out.print("Enter input in decimals");
                return;

            }
            switch (ch) {
                case 1:

                    System.out.print("\nEnter number for square root: ");
                    calculator.num1 = scanner.nextDouble();

                    if(calculator.num1 < 0)
                    {
                        System.out.println("please enter positive value\n");
                        logging.error("[ERROR]: Square root is not defined for Negative numbers");
                    }
                    else
                        System.out.println("The Square root of " + calculator.num1 + " is: " + callSQRT(calculator.num1));
                    break;

                case 2:

                    try {
                        System.out.print("\nEnter number: ");
                        calculator.num1 = scanner.nextInt();

                        if (calculator.num1 < 0)
                        {
                            System.out.println("You have entered a negative value. Factorial cannot be calculated for negative value!!\n");
                            logging.error("[ERROR]: Factorial is not defined for negative numbers");

                            flag=false;
                        }
                        else
                            System.out.println("The Factorial of " + calculator.num1 + " is: " + callFact(calculator.num1));

                    } catch (InputMismatchException error) {
                        System.out.println("Please enter input in integer format");
                        logging.error("[ERROR]: Value type mismatch. Expected Integer got some other type. ");

                        flag=false;
                    }

                    break;

                case 3:

                    try {
                        System.out.print("\nEnter number: ");
                        calculator.num1 = scanner.nextDouble();
                        if (calculator.num1 <= 0)
                            System.out.println("You have entered either 0 or negative value. Logarithm cannot be calculated for such values!!\n");
                        else
                            System.out.println("The Natural logarithm of " + calculator.num1 + " is: " + callNatLog(calculator.num1));
                    } catch (InputMismatchException error) {
                        System.out.println("Please enter input in decimal format");
                        logging.error("[ERROR]: Value type mismatch. Expected Double got some other type. ");
                        flag=false;
                    }
                    break;

                case 4:

                    try {
                        System.out.print("\nEnter first number: ");
                        calculator.num1 = scanner.nextDouble();
                        System.out.print("\nEnter second number: ");
                        calculator.num2 = scanner.nextDouble();

                        System.out.println(calculator.num1 + " to the power " + calculator.num2 + " is: " + callPower(calculator.num1, calculator.num2));
                    } catch (InputMismatchException error) {
                        System.out.println("Please enter input in decimal format");
                        logging.error("[ERROR]: Value type mismatch. Expected integers got some other type. ");
                        flag=false;
                    }
                    break;
                default:
                    System.out.println("\nExiting....\nThank you!! :)\n");
                    return;
            }
        }
    }
    public static double callSQRT(double n)
    {
        logging.info("[INFO]: input for Square Root: " + n);
        logging.info("[INFO]: output of Square Root: " + Math.sqrt(n));
        return Math.sqrt(n);
    }

    public static double callNatLog(double n)
    {
        logging.info("[INFO]: input for Natual Logarithm: " + n);
        logging.info("[INFO]: output of Natual Logarithm: " + Math.log(n));
        return Math.log(n);
    }

    public static double callPower(double n1, double n2)
    {
        logging.info("[INFO]: input for power function: " + n1 + " , "+ n2);

        if(n1==0 && n2==0)
        {
            logging.info("[INFO]: output of power function: " + Double.NaN);
            return Double.NaN;
        }

        logging.info("[INFO]: output of power function: " + Math.pow(n1, n2));
        return Math.pow(n1, n2);
    }

    public static double callFact(double n)
    {

        logging.info("[INFO]: Input for Factorial function: " + n);
        double res=1;

        if(n <0 )
            return Double.NaN;

        while(n!=0)
        {
            res=res*n;
            n--;
        }
        logging.info("[INFO]: output of Factorial function: "+ res);
        return res;
    }
}