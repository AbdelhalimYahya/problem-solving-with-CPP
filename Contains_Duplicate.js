/**
 * @param {number[]} nums
 * @return {boolean}
 */
var containsDuplicate = function(nums) {
    
    const seen = new Set();

    for (const num of nums) {        
        if (seen.has(num)) {
            return true;
        }

        seen.add(num);    
    }
    
    return false;

};

//````the link : https://leetcode.com/problems/contains-duplicate/description/
