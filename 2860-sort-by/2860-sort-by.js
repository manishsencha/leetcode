/**
 * @param {Array} arr
 * @param {Function} fn
 * @return {Array}
 */
var sortBy = function(arr, fn) {
    return arr.sort((a, b)=> {
        if(fn(a) > fn(b)) {
            return 1;
        }
        else if(fn(a) < fn(b)) {
            return -1;
        }
        return 0;
    });
};