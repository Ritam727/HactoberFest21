const mongoose = require('mongoose');
const { boolean } = require('webidl-conversions');

const TodoSchema = new mongoose.Schema({
    description : {
        type: String,
        required: true
    },
    date : {
        type: Date,
        required: true
    },
    category: {
        type: String,
        required: false
    },
})

var Todo = mongoose.model('Todo', TodoSchema);

module.exports = Todo;