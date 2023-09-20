import java.util.HashMap;

class code1 {

    public static void main(String[] args) {
        
    }
    public static int[] twoSum(int[] nums, int target) {
        HashMap<Integer, Integer> map = new HashMap<>();
        for (int i = 0; i < nums.length; i++) {
            if (!map.containsKey(nums[i])) {
                map.put(nums[i], i);
            }
        }

        for (int i = 0; i < nums.length; i++) {
            if(map.containsKey(target - nums[i])){
                return new int[]{i,map.get(target-nums[i])};
                // list.add(i,map.get(target-nums[i]));
            }
        }
        
        return new int[]{};
    }
}