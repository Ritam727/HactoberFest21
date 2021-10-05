// Importing modules
const express= require('express')
const port = 8000;
const path=require('path')
const Todo = require('./models/model');
const db =require('./config/mongoose')

const app = express();

// Setting view engine etc
app.set('view engine', 'ejs')
app.set('views', path.join(__dirname, 'views'))
app.use(express.urlencoded());
app.use(express.static('assets'));

// Controllers
app.get('/',function(req,res){
    Todo.find({},function(err,Todo_list){
        if(err){console.log("Error occured while Fetching Tasks");return;}
        res.render('index.ejs',{
            tasklist: Todo_list
        })
    })
})

// Controller for adding tasks
app.post('/add-tasks' ,function(req,res){
    Todo.create({
        description:req.body.description,
        date : req.body.date,
        category : req.body.category
    },function(err,newTask){
          if(err){console.log("Error occured while adding task");return;}
          return res.redirect('/');
    })
})

// Controller for deleting tasks
app.post('/delete-tasks',function(req,res){
    console.log(req.body.checkbox.length);
    if(Array.isArray(req.body.checkbox)){
        let check= req.body.checkbox;
        for(i of check){Todo.findByIdAndRemove(i,function(err){if(err) console.log(`Error in deleting contact : ${err}`)})}
    }
    else{
        Todo.findByIdAndRemove(req.body.checkbox,function(err){if(err) console.log(`Error in deleting contact : ${err}`)})
    }
    return res.redirect('back');
})
// Array storing the data
var Todolist=[
    {
        description: "Add a task!",
        date: 10/2/2021,
        category : "Work"
    },
    {
        description: "Add a  second task!",
        date: 10/12/2020,
        category : "Personal"
    },
]
// Listening to port
app.listen(port,function(err){
    if(err){console.log(`Error occured while running the server : ${err}`)}
    console.log(`Server is up and running on port: ${port}`)
})