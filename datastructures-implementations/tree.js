module.exports = class Tree {
    constructor() {
        this.nodes= {};
    }
    insert(tree, value) {
        if (tree.value) {
            if (value > tree.value) {
                this.insert(tree.right, value);
            }
            else {
                this.insert(tree.left, value);
            }
        }
        else {
            tree.value = value;
            tree.left = {};
            tree.right = {};
        }
    }
}

/*
* To insert a new node, the correct syntax is:
* const newTree = new Tree();
* newTree.insert(newTree.nodes, 5);
*/
