module.exports = class Stack {
    constructor () {
        this.data = [];
    }
    push (element) {
        this.data.push(element);
    } 
    pop () {
        this.data.pop();
    }
    get () {
        return this.data;
    }
}
