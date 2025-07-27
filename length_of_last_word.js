/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLastWord = function(s) {
    const words = s.trim().split(/\s+/);

    let last_word = words[words.length - 1]

    return last_word.length;
};

// the link : https://leetcode.com/problems/length-of-last-word/
