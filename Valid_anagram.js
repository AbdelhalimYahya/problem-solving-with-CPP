/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isAnagram = function(s, t) {
    s = s.toLowerCase();
    t = t.toLowerCase();

    if (s.length != t.length) {
            return false;
        }
    
    for (let i = 0 ; i < s.length ; i++) {
    
        if (t.includes(s[i])) {
            //remove the first appearance of the chosen letter brother
            t = t.replace(s[i] , "")
        } else {
            return false;
        }

        if (t == "") {
            return true;
        }
    }
};

// the link : https://leetcode.com/problems/valid-anagram/
