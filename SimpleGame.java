class Hello {
    public static void main(String[] args) {
        int time = 14324;
        int hours = (time / 60) / 60;
        time -= hours * 60 * 60;
        int minutes = time / 60;
        time -= minutes * 60;
        System.out.println((hours + ":" + minutes + ":" + time).getClass());

        int digit;
        int number=123;
        int sum=0;
        while (number > 0) {
            digit = number % 10;
            sum = sum + digit;
            number = number / 10;
        }
        System.out.println("Sum of Digits: " + sum);
    }
}