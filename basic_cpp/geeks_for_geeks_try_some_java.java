
class Solution {
    static void swapElements(int[] arr) {

        // Your code here
        int sz = arr.length;
        int temp;
        for(int i= 0 ;i+2<sz;i++)
        {
            temp = arr[i];
            arr[i] = arr[i+2];
            arr[i+2] = temp;
        }
    }
}