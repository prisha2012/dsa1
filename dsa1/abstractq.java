import java.util.Scanner;

// Abstract class with abstract method
abstract class Payment {
    public abstract void pay(double amount);
}

// CreditCard class overrides pay()
class CreditCard extends Payment {
    public void pay(double amount) {
        System.out.println("Payment of ₹" + amount + " done via Credit Card.");
    }
}

// UPI class overrides pay()
class UPI extends Payment {
    public void pay(double amount) {
        System.out.println("Payment of ₹" + amount + " done via UPI.");
    }
}

public class abstractq {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // Read payment method
        String method = sc.nextLine().trim().toLowerCase();

        // Read amount
        double amount = sc.nextDouble();

        Payment payment;

        // Choose implementation based on method
        if (method.equals("credit")) {
            payment = new CreditCard();
        } else if (method.equals("upi")) {
            payment = new UPI();
        } else {
            System.out.println("Invalid payment method.");
            sc.close();
            return;
        }

        // Call the pay method
        payment.pay(amount);

        sc.close();
    }
}
