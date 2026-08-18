/**
 * @param {number} celsius
 * @return {number[]}
 */
var convertTemperature = function(celsius) {
    const kelvin = 273.15+celsius;

    const faren = ( 1.8* celsius)+32;

    let temp = [kelvin,faren];
    return temp;
    
};