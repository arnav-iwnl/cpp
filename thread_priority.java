
class PrintNumbers extends Thread {
    public void run() {
        for (int i = 1; i <= 5; i++) {
            System.out.println(Thread.currentThread().getId() + ": " + i);
        }
    }
}

public class thread_priority {
    public static void main(String[] args) {
        PrintNumbers thread1 = new PrintNumbers();
        PrintNumbers thread2 = new PrintNumbers();

        // Set thread priorities
        thread1.setPriority(Thread.MIN_PRIORITY); // Min priority (1)
        thread2.setPriority(Thread.MAX_PRIORITY); // Max priority (10)

        // Start the threads
        thread1.start();
        thread2.start();
    }
}
