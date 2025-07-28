/**
 * @param {number[]} nums
 * @return {number[]}
 */
var runningSum = function(nums) {
    // the first submit
    
    // let na = [];
    // let sum = 0;


    // for (let i = 0 ; i < nums.length ; i++) {
        
    //     na.push(nums[i] + sum)
    //     sum += nums[i];

    // }

    // return na;

    //the second submit

    for (let i = 1 ; i < nums.length ; i++) {
        
        nums[i] += nums[i - 1]; 

    }

    return nums;

    // the third submit

    // let prefixSum = nums.map((_, index, nums) => index === 0 ? nums[0] : nums[index] + nums[index - 1]);

    // return prefixSum;

};
