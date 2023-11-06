class PrintNumbers extends Thread {
    public void run() {
        for (int i = 1; i <= 5; i++) {
            System.out.println(Thread.currentThread().threadId()+ ": " + i);
        }
    }
}
public class multi_thread {
    public static void main(String[] args) {
        PrintNumbers thread1 = new PrintNumbers();
        PrintNumbers thread2 = new PrintNumbers();

        // Start the threads
        thread1.start();
        thread2.start();
    }
}


