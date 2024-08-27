public class SecondLargest {
    public static int findSecondLargest(int[] arr) {
        int first = Integer.MIN_VALUE, second = Integer.MIN_VALUE;
        for (int num : arr) {
            if (num > first) {
                second = first;
                first = num;
            } else if (num > second && num < first) {
                second = num;
            }
        }
        return second;
    }

    public static void main(String[] args) {
        int[] nums = {10, 20, 4, 45, 99};
        System.out.println("Second Largest: " + findSecondLargest(nums));
    }
}
