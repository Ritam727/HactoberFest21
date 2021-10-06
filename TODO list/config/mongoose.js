const mongoose = require('mongoose')

mongoose.connect('mongodb://localhost/todo_list_db')

var db= mongoose.connection;

db.on('error', console.error.bind(console, "Eror while connecting to database"))

db.once('open', function(){
    console.log("Succesfully connected to db");
})