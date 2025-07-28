/**
 * @param {number[]} nums
 * @return {number[]}
 */
var getConcatenation = function(nums) {
    // let solution = nums.push(...nums);

    // let solution = nums.concat(??????)

    let solution = [...nums , ...nums]

    return solution;
};
